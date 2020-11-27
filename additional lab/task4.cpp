#include <iostream>
using namespace std;

const int SIZE = 97;

bool isProductEqual(int first, int second, int third, int fourth) {
    // if (first * fourth == second * third) {
    //     return true;
    // }

    return first * fourth == second * third;
}

int main() {
    int numbers[SIZE] = {};
    int n;

    do {
        cin >> n;
    } while(n < 4 || n > 100);

    for(int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    bool existFourNumbers = false;

    for(int i = 0; i < n - 3; ++i) {
        // bool hasEqualProduct = isProductEqual(numbers[i], numbers[i + 1], numbers[i + 2], numbers[i + 3]);
        bool hasEqualProduct = numbers[i] * numbers[i + 3] == numbers[i + 1] * numbers[i + 2];
        
        if (hasEqualProduct) {
            existFourNumbers = true;
            break;
        }
    }

    if (existFourNumbers) {
        cout << "There are 4 numbers with equal product" << endl;
    } else {
        cout << "There are no 4 numbers with equal product" << endl;
    }

    return 0;
}