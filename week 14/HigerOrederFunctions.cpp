#include <iostream>
#include <math.h>

using namespace std;

typedef double (*f_type)(double);

f_type table(char ch) {
    switch(ch) {
        case 'a': return sin;
        case 'b': return cos;
        case 'c': return exp;
        case 'd': return log;
    }
}

void map (double* arr, int size, double (*f)(double)) {
	for (int i = 0; i < size; ++i) {
		arr[i] = (*f)(arr[i]);
    }
}

int main() {
	int n;
	cin >> n;
	double* arr = new double[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	map(arr, n, fabs);
	map(arr, n, sqrt);

	for(int i = 0; i < n; ++i) {
		cout << arr[i] << “ “;
	}

	cout << endl;

	delete[] arr;

    char ch;
    cout << "ch= ";
    cin >> ch;

    if (ch < 'a' || ch >'d') {
        cout << "Incorrect input! \n";
    } else {
        double x;
        cout << "x= ";
        cin >> x;
        cout << table(ch)(x) << '\n';
    }

	return 0;
}
