#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    
    cout << "In swap: " << a << endl;
    cout << "In swap: " << b << endl;
}

double circleArea(double &r, double const &pi) {
    r *= 2;
    
    return pi * r * r;
}

void print(int a, int b = 5, int c = 8) {
    cout << a << " " << b << endl;
}

int main() {
    char autobus = 'A';
    char &bus = autobus;
    
    cout << autobus << endl;
    cout << bus << endl;
    
    bus = 'B';
    
    cout << autobus << endl;
    cout << bus << endl;
    
    autobus = 'C';
    
    cout << autobus << endl;
    cout << bus << endl;
    
    int a = 5, b = 6;
    
    a += b;
    b +=a;
    
    cout << "Changed before swap: " << a << endl;
    cout << "Changed before swap: " << b << endl;
    
    swap(a, b);
    
    cout << a << endl;
    cout << b << endl;
    
    a -= 3;
    b -= 4;
    
    cout << "Changed after swap: " << a << endl;
    cout << "Changed after swap: " << b << endl;
    
    swap(a, b);
    
    cout << a << endl;
    cout << b << endl;
    
    const double PI = 3.14;
    double r = 4.5;
    
    cout << "Before area: " << r << endl;
    
    double area = circleArea(r, PI);
    
    cout << "Area: " << area << endl;
    cout << "After area: " << r << endl;
    
    cout << &area << endl;
    
    double* p = &area;
    
    cout << p << endl;
    
    cout << *p << endl;
    
    int a = 5;
    
    int* q = nullptr;
    
    q = &a;
    
    p = &r;
    
    cout << *p << endl;
    
    
    print(7, 8);
    print(3);
    
    q--;
    
    char sym = 'D';
    char* s = sym;
    s++;
    
    int arr[5];
    int* ptr = arr;
    
    *ptr == arr[0];
    *(ptr + 1) == arr[1];
    *(ptr + 2) == arr[2];
    
    for(int i = 0; i < 5; ++i) {
        cin >> *(arr + i);
    }
    
    for(int i = 0; i < 5; ++i) {
        cout << *(arr + i);
    }
    
    
    return 0;
}