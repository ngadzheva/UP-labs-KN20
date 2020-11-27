#include <iostream>

using namespace std;

const int SIZE = 100;

bool isGrowingSequence(double arr[], int k) {
    bool isGrowing = true;

    for(int i = 0; i < k; ++i) {
        if(arr[i] > arr[i + 1]) {
            isGrowing = false;
            break;
        }
    }

    return isGrowing;
}

bool isDecreasingSequence(double arr[], int k) {
    bool isDecreasing = true;

    for(int i = 0; i < k; ++i) {
        if(arr[i + 1] > arr[i]) {
            isDecreasing = false;
            break;
        }
    }

    return isDecreasing;
}

int main() {
    int k, n;
    cin >> n >> k;

    double arr[SIZE] = {};

    bool isSequenceCorrect = true;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < k; ++j) {
            cin >> arr[j];
        }

        bool isSequenceIncorrect = i % 2 == 0 && !isDecreasingSequence(arr, k) || i % 2 != 0 && !isGrowingSequence(arr, k);
        
        if (isSequenceIncorrect) {
            isSequenceCorrect = false;
            break;
        }
    }

    if(isSequenceCorrect) {
        cout << "The sequence is correct" << endl; 
    } else {
        cout << "The sequence is not correct" << endl;
    }

    return 0;
}