#include <iostream>
#include <cstring>
using namespace std;

bool search(char** board, bool** visited, int rows, int cols, char* word, int i, int j, int index) {
    if (index == strlen(word)) {
        return true;
    }

    if(i >= rows || i < 0 || j >= cols || j < 0 || board[i][j] != word[index] || visited[i][j]) {
        return false;
    }

    visited[i][j] = true;

    if(search(board, visited, rows, cols, word, i-1, j, index + 1) ||
        search(board, visited, rows, cols, word, i + 1, j, index + 1) ||
        search(board, visited, rows, cols, word, i, j - 1, index + 1) ||
        search(board, visited, rows, cols, word, i, j + 1, index + 1)) {
            return true;
    }

    visited[i][j] = false;

    return false;
}

bool exist(char** board, bool** visited, int rows, int cols, char* word) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++){
            if(*word == *(*(board + i) + j) && search(board, visited, rows, cols, word, i, j, 0)) {
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    int rows, cols;

    do {
        cin >> rows;
    } while(rows < 1);

    do {
        cin >> cols;
    } while(cols < 0 || cols > 200);

    char** board = new char*[rows];

    for (int i = 0; i < rows; i++)
    {
        *(board + 1) = new char[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j) {
            cin >> *(*(board + i) + j);
        }
    }
    
    char word[1000];
    cin.getline(word, 1000, '\n');

    bool** visited = new bool*[rows];

    for (size_t i = 0; i < rows; i++)
    {
        *(visited + i) = new bool[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            *(*(visited + i) + j) = false;
        }
    }
    
    bool wordExists = exist(board, visited, rows, cols, word);

    for (int i = 0; i < rows; i++)
    {
        delete[] visited[i];
    }
    delete[] visited;

    for (int i = 0; i < rows; i++)
    {
        delete[] board[i];
    }
    delete[] board;
    
    return 0;
}