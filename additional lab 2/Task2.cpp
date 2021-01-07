#include <iostream>

using namespace std;

bool isValidCell(int** matrix, int rows, int cols, int currentRow, int currentCol) {
    return currentRow >= 0 && currentRow < rows && 
           currentCol >= 0 && currentCol < cols && 
           matrix[currentRow][currentCol] == 1;
}

void findIslands(int** matrix, bool** used, int rows, int cols, int currentRow, int currentCol) {
    if (isValidCell(matrix, rows, cols, currentRow, currentCol) && !used[currentRow][currentCol]) {
        used[currentRow][currentCol] = true;

        findIslands(matrix, used, rows, cols, currentRow, currentCol + 1);
        findIslands(matrix, used, rows, cols, currentRow + 1, currentCol);
        findIslands(matrix, used, rows, cols, currentRow, currentCol - 1);
        findIslands(matrix, used, rows, cols, currentRow - 1, currentCol);
    } 
}

int getIslandsCount(int** matrix, bool** used, int rows, int cols) {
    int count = 0;

    for (int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            if (!used[i][j] && matrix[i][j] == 1) {
                findIslands(matrix, used, rows, cols, i, j);
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

    int islandsCount = getIslandsCount(matrix, used, n, m);

    cout << islandsCount << endl;

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