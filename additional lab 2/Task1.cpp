#include <iostream>

using namespace std;

int findNumberOfRows(int** matrix, bool* mark, int rows, int cols) {
    int count = 0;
    int currSum;
    int lastSum = 0;

    for (int i = 0; i < rows; ++i) {
        currSum = 0;

        for (int j = 0; j < cols; ++j) {
            currSum += matrix[i][j];
        }
        
        if (currSum > lastSum) {
            mark[i] = true;
            ++count;
            lastSum = currSum;
        } else {
            mark[i] = false;
        }
    }
    
    return count;
}

int main() {
    int m, n;

    do {
        cin >> m;
    } while (m < 1);

    do {
        cin >> n;
    } while (n > 100);

    int** matrix = new int*[m];

    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
            // cin >> *(*(matrix + i) + j)
        }  
    }

    bool* mark = new bool[m];

    int newRows = findNumberOfRows(matrix, mark, m, n);

    int** newMatrix = new int*[newRows];

    for (int i = 0; i < newRows; ++i) {
        newMatrix[i] = new int[n];
    }
    
    int k = 0;
    for (int i = 0; i < m; ++i) {
        if (mark[i]) {
            for (int j = 0; j < n; ++j) {
                newMatrix[k][j] = matrix[i][j];
            }
            
            ++k;
        }
    }
    
    for (int i = 0; i < newRows; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << newMatrix[i][j] << ' ';
        }
        
        cout << endl;
    }
    
    for (int i = 0; i < newRows; ++i) {
        delete [] newMatrix[i];
    }
    
    delete [] newMatrix;

    delete [] mark;

    for (int i = 0; i < m; ++i) {
        delete [] matrix[i];
    }
    
    delete [] matrix;

    return 0;
}