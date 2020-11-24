#include<iostream>
using namespace std;

void sieveOfEratosthenes(int n, int a[]);
void writePrime(int n, int a[]);

int main() {
    double x, y, width, height;
    int days_in_month, daysinfebruary;
    bool has31Days;
    
    bool isLeapYear = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    
    if (year % 4 == 0) {
        if(year % 100 != 0) {
            if (year % 400 == 0) {
                
            }
        } else {
            
        }
    }
    
    if (month == 1) {
        
    }
    if(month == 2) {
        
    }
    ...
    if (month == 12) {
        
    }
    
    switch (month) {
        case 1:
        case 2:
    }
    
    if (a < 10 || a >100) {
        
    } else if (a == 15) {
        
    } else if(a >= 16 && a <= 20) {
        
    } else {
        
    }
    
    int arr[5] = {6, 5, 1, 12, 60};
    
    int min = arr[0];
    
    for (int i = 1; i < 5; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    const int SIZE = 100;
    int numbers[SIZE];
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    bool isSymmetric = true;
    
    for(int i = 0; i < (n + 1) / 2; ++i) {
        if (numbers[i] != numbers[n - 1 - i]) {
            isSymmetric = false;
            break;
        }
    }
    
    if (isSymmetric) {
        cout << "The array of numbers is symmetric" << endl;
    } else {
        cout << "The array of numbers is not symmetric" << endl;
    }
    
    int m;
    do {
        cin >> m;
    } while(m <= 1 || m > 100);
    
    const int LENGTH = 100;
    
    bool array[LENGTH];
    
    seiveOfEratosthenes(m, array);
    writePrime(m, array);
    
    return 0;
}

void seiveOfEratosthenes(int n, bool a[]) {
    a[0] = a[1] = false;
    for (int i = 2; i < n; ++i) {
        a[i] = true;
    }
    
    for(int i = 2; i < n; ++i) {
        if(a[i]) {
            for(int j = i; i * j < n; ++j) {
                a[i * j] = false;
            }
        }
    }
}

void writePrime(int n, bool a[]) {
    for(int i = 0; i < n; ++i) {
        if(a[i]) {
            cout << i << " ";
        }
    }
    
    cout << endl;
}