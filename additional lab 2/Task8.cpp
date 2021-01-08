#include <iostream>

using namespace std;

void init (int* way, int n) {
  for (int i = 0; i < n; ++i) {
    way[i] = 0;
  }
}

void printWay (int* way, int n) {
  for (int i = 0; i < n - 1; ++i) {
    cout << '(' << way[2 * i] << ", " << way[2 * i + 1] << ") -> ";
  }
  
  cout << '(' << way[2 * (n - 1)] << ", " << way[2 * n - 1] << ')' << endl;
}

void registerWay (int* way, int n, int* minWay, int& minWayN) {
  if (minWayN == -1 || minWayN > n) {
    for (minWayN = 0; minWayN < n; ++minWayN) {
      minWay[2 * minWayN] = way[2 * minWayN];
      minWay[2 * minWayN + 1] = way[2 * minWayN + 1];
    }
  }
}

void way (int x, int y, int* currWay, int l, int* minWay, int& minWayN) {
  currWay[2 * l] = x;
  currWay[2 * l + 1] = y;
  
  if (x < 0 || y < 0 || x > 7 || y > 7) {
    return;
  }
  
  if (x == 7 && y == 7) {
    registerWay(currWay, l + 1, minWay, minWayN);
    return;
  }
  
  if (!labyrinth[x][y]) {
    return;
  }
  
  labyrinth[x][y] = 0;
  
  way (x + 1, y, currWay, l + 1, minWay, minWayN);
  way (x, y + 1, currWay, l + 1, minWay, minWayN);
  way (x - 1, y, currWay, l + 1, minWay, minWayN);
  way (x, y - 1, currWay, l + 1, minWay, minWayN);
  
  labyrinth[x][y] = 1;
}

int main() {
  int n;
  cin >> n;
  
  int** labyrinth = new int*[n];
  
  for (int i = 0; i < n; ++i) {
    labyrinth[i] = new int[n];
  }
  
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> labyrinth[i][j];
    }
  }
  
  int waySize = n * n;
  int* currWay = new int[waySize];
  int* minWay = new int[waySize];
  
  init(currWay, waySize);
  init(minWay, waySize);
  
  int minWayN = -1;
  
  way(0, 0, currWay, 0, minWay, minWayN);
  printWay(minWay, minWayN);
  
  return 0;
}
