#include <iostream>

using namespace std;

const int SIZE = 10;

int main() {
    int a, b;
    cin >> a >> b;

    int count = 0;
    bool areDifferent = true;
    bool arr[SIZE];

    for(int i = a; i < b; ++i) {
        int current = i;
        areDifferent = true;

        for(int i = 0; i < SIZE; ++i) {
            arr[i] = false;
        }
        
        while(current > 0) {
            int digit = current % 10;

            if(arr[digit]) {
                areDifferent = false;
                break;
            }

            arr[digit] = true;

            current /= 10;
        }

        if (areDifferent) {
            ++count;
        }
    }
    return 0;
}