#include <iostream>

using namespace std;

const int SIZE = 100;

int main() {
    int p, q, n;
    cin >> p >> q >> n;

    int arr[SIZE];

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool exists = false;

    for(int i = 0; i < n; ++i) {
        if(arr[i] >= p && arr[i] <= q) {
            exists = true;
            break;
        }
    }

    if(exists) {
        cout << "There is a number between p and q" << endl;
    } else {
        cout << "There is no number between p and q" << endl;
    }

    return 0;
}