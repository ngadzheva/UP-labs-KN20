#include <iostream>

using namespace std;

const int SIZE = 500;

int main() {
    int n;
    // cin >> n;

    // if(n < 500) {
    //     cout << "Invalid input" << endl;
    //     return 0;
    // }

    do {
        cin >> n;
    } while(n > 500);

    int arr[SIZE] = {};
    int sum = 0;

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum * 1.0 / n;

    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int i = 0;
    for(int j = 0; j < n; ++j) {
        while(j < n && arr[j] < average) {
            arr[j] = 0;
            ++j;
        }

        if(j != n) {
            arr[i] = arr[j];

            if (i != j) {
                arr[j] = 0;
            }
            
            ++i;
        }
    }

    int lastIndex = i;

    // for(int j = i; j < n; ++j) {
    //     arr[j] = 0;
    // }

    for(int j = 0; j < lastIndex; ++j) {
        cout << arr[j] << " ";
    }

    cout << endl;

    return 0;
}