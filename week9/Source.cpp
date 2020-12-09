#include <iostream>
using namespace std;

const int SIZE = 100;

int init(int* a) {
    int n;
    
    do {
        cin >> n;
    } while(n <= 0 || n > SIZE);
    
    for(int i = 0; i < n; ++i) {
        cin >> *(a + i);
    }
    
    return n;
}

void print(int* a, int size) {
    for(int i = 0; i < size; ++i) {
        cout << *(a + i) << " ";
    }
    cout << endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int* a, int size) {
    // int* temp;
    
    for(int i = 0; i < size / 2; ++i) {
        // *temp = *(a + i);
        // *(a + i) = *(a + (size - i - 1));
        // *(a + (size - i - 1)) = *temp;
        swap(*(a + i), *(a + (size - i - 1)));
    }
}

int* reverseArray() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    for(int i = 0; i < 3; ++i) {
        swap(*(arr+i), *(arr + (3 - i - 1)));
    }
    
    return arr;
}

void display(int arr[][3], int rows, int cols){
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << arr[i][j];
        }
    }
}

bool hasSequenceOfZeros(int* arr, int size) {
    // int i = -1;
    // do {
    //     ++i;
    // } while(i < size - 2 && (*(arr + i) != 0 || *(arr + i + 1) != 0));
    
    // return *(arr + i) == 0 && *(arr + i + 1) == 0;
    
    
    for(int i = 0; i < size - 1; ++i) {
        if (*(arr + i) == 0 && *(arr + i + 1) ==0) {
            return true;
        }
    }
    
    return false;
}

void readMatrix(int n, int arr[][20]) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
}

void writeMatrix(int n, int arr[][20]) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << arr[i][j];
        }
    }
}

int main() {
    int arr[SIZE];
    
    int n = init(arr);
    
    print(arr, n);
    
    reverse(arr, n);
    
    print(arr, n);
    
    int array[SIZE][SIZE];
    
    // SIZE * SIZE
    
    int array3D[SIZE][SIZE][SIZE];
    
    int test[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };
    
    display(test, 2, 3);
    
    test[0]; // -> {1, 2, 3}
    test[1]; // -> {4, 5, 6}
    
    test[0][1]; // -> 2
    
    // test[i][j];
    
    int rows, cols;
    cin >> rows >> cols;
    
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }
    
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << array[i][j];
            cout << *(*(array + i) + j);
        }
    }
    
    do{
        cin >> n;
    }while(n < 1 || n > 10);
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> array[i][j];
        }
    }
    
    int sum = 0;
    for(int i = 1; i < n; ++i) {
        for(int j = 0; j < i; ++j){
            if(array[i][j] % 2 == 1){
                sum += array[i][j];
            }
        }
    }
    
    cout << sum;
    
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> *(*(array+i)+j);
        }
    }
    int product=1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            product *= (*(*(array+i)+j));
        }
    }
    cout<<product;
    
    int matrix[20][20];
    
    do {
        cin >> n;
    } while(n < 2 || n > 20);
    
    // cin >> n;
    
    // if(n < 2 || n > 20) {
    //     cout << "Invalid size" << endl;
    //     return 0;
    // }
    
    for(int i = 0; i < n; ++i) {
        if(hasSequenceOfZeros(matrix[i], n)) {
            cout << i << endl;
        }
    }
    
    return 0;
}