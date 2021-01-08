#include <iostream>

using namespace std;

bool isValidCell(int** matrix, int rows, int cols, int currentRow, int currentCol, int number) {
    return currentRow >= 0 && currentRow < rows && 
           currentCol >= 0 && currentCol < cols && 
           matrix[currentRow][currentCol] == number;
}

void findAreas(int** matrix, bool** used, int rows, int cols, int currentRow, int currentCol, int number) {
    if (isValidCell(matrix, rows, cols, currentRow, currentCol, number) && !used[currentRow][currentCol]) {
        used[currentRow][currentCol] = true;

        findIslands(matrix, used, rows, cols, currentRow, currentCol + 1, number);
        findIslands(matrix, used, rows, cols, currentRow + 1, currentCol, number);
        findIslands(matrix, used, rows, cols, currentRow, currentCol - 1, number);
        findIslands(matrix, used, rows, cols, currentRow - 1, currentCol, number);
    } 
}

int countConnected(int** matrix, bool** used, int rows, int cols) {
    int count = 0;

    for (int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            if (!used[i][j]) {
                findAreas(matrix, used, rows, cols, i, j, matrix[i][j]);
                ++count;
            }
        }
    }
    
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    int** matrix = new int*[n];

    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    bool** used = new bool*[n];

    for (int i = 0; i < n; ++i) {
        used[i] = new bool[m];

        for (int j = 0; j < m; ++j) {
            used[i][j] = false;
        } 
    }

    int areasCount = countConnected(matrix, used, n, m);

    cout << areasCount << endl;

    for (int i = 0; i < n; ++i) {
        delete [] used[i];
    }

    delete[] used;

    for (int i = 0; i < n; ++i) {
        delete [] matrix[i];
    }

    delete[] matrix;
    
    return 0;
}
