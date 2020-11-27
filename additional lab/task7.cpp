#include <iostream>
using namespace std;

int min(int, int, int);
int max(int, int, int, int);

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int min1 =  min(a, b, c);
    int min2 = min(a, b, d);
    int min3 = min(a, c, d);
    int min4 = min(b, c, d);

    int maxMin = max(min1, min2, min3, min4);

    cout << maxMin << endl;
    
    return 0;
}

int min(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    } 

    if(b < a && b < c) {
        return b;
    }

    if(c < a && c < b) {
        return c;
    }
}

int max(int a, int b, int c, int d) {
    if (a > b && a > c && a > d) {
        return a;
    } 

    if(b > a && b > c && b > d) {
        return b;
    }

    if(c > a && c > b && c > d) {
        return c;
    }

    if(d > a && d > b && d > c) {
        return d;
    }
}