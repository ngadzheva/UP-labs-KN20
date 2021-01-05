#include <iostream>
#include <cstring>

using namespace std;

// F1 = F2 = 1
// Fi = Fi-1 + Fi-2, i > 2
int fib(int n) {
    if (n <= 2) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

// n! = 1 . 2 . 3 ... . n
// n! = 1 for n = 0
// n! = n . (n - 1) for n > 0
int fact(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fact(n - 1);
}

// Given two sorted strings, write a recursive which merges these two strings
// Input: abfg cdhi
// Output: abcdfghi
void merge(char* str1, char* str2, char* result) {
    if (!*str1) {
        strcpy(result, str2);
    }
    else {
        if(!*str2) {
            strcpy(result, str1);
        } else {
            if (*str1 < *str2) {
                *result = *str1;
                merge(str1 + 1, str2, result + 1);
            } else {
                *result = *str2;
                merge(str1, str2 + 1, result + 1);
            }
        }
    }
}

bool binarySearch(int* sortedNumbers, int n, int x) {
    int left = 0;
    int right = n - 1;
    int middle;

    while (left <= right) {
        middle = (left + right) / 2;

        if (x == sortedNumbers[middle]) {
            return true;
        }

        if (x < sortedNumbers[middle]) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }

    return false;
}

bool linearSearchInSortedArray(int* sortedNumbers, int n, int x) {
    int i = 0;

    while (i < n && sortedNumbers[i] < x) {
        ++i;
    }

    if (i < n && sortedNumbers[i] == x) {
        return true;
    }

    return false;
}

void linearSearch() {
    int size;
    cin >> size;

    char* text = new char[size + 1];

    cin.getline(text, size);

    text[size] = '\0';

    char symbol;
    cin >> symbol;

    bool found = false;

    for (int i = 0; i < size; i++) {
        if (text[i] == symbol) {
            found = true;
        }
    }
    
    if (found) {
        cout << "The symbol is found." << endl;
    } else {
        cout << "The symbol is not found." << endl;
    }
}

void bubbleSort(int* numbers, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            if (numbers[j - 1] > numbers[j]) {
                int temp = numbers[j - 1];
                numbers[j - 1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

void selectionSort(int* numbers, int n) {
    int min;

    for (int i = 0; i < n - 1; i++) {
        min = i;

        for (int j = i + 1; j < n; j++) {
            if (numbers[j] < numbers[min]) {
                min = j;
            }
        }
        int temp = numbers[min];
        numbers[min] = numbers[i];
        numbers[i] = temp;
    }
}

void insertionSort() {
    int size;
    cin >> size;

    int* numbers = new int[size];

    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    int x;
    int j;

    for(int i = 0; i < size; ++i) {
        x = numbers[i];
        j = i - 1;

        while(j >= 0 && x < numbers[j]) {
            numbers[j + 1] = numbers[j];
            --j;
            numbers[j + 1] = x;
        }
    }

    for(int i = 0; i < size; ++i) {
        cout << numbers[i] << ' ';
    }

    delete [] numbers;
}

void matrix() {
    int n;

    do {
        cin >> n;
    } while(n < 1 || n > 10);

    int** array = new int*[n];

    for(int i = 0; i < n; ++i) {
        *(array + i) = new int[n];
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> *(*(array + j) + i);
        }
    }

    int size = n * (n - 1) / 2;
    int* result = new int[size];

    int k = 0;

    for(int i = 1; i < n; ++i) {
        for(int j = 0; j < n - 1; ++j) {
            *(result + k) = *(*(array + j) +  i + j);
            ++k;
        }
    }

    for(int i = 0; i < size; ++i) {
        cout << *(result + i) << ' ';
    }

    cout << endl;

    delete [] result;

    for(int i = 0; i < n; ++i) {
        delete [] *(array + i);
    }

    delete [] array;
}

int main() {
    int size;
    cin >> size;

    int* array = new int[size];

    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    delete [] array;

    int* number = new int;

    delete number;

    int rows, cols;
    cin >> rows >> cols;

    int** 2dArray = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        2dArray[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> 2dArray[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        delete [] 2dArray[i];
    }

    delete [] 2dArray;

    char* str1 = "abfg";
    char* str2 = "cdhi";
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    char* result = new char[length1 + length2 + 1];

    merge(str1, str2, result);

    result[length1 + length2] = '\0';

    cout << result << endl;

    delete [] result;

    return 0;
}
