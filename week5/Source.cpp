#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Calculating n!
    int n, prod = 1; 
    cin >> n;

    do {
        prod *= n;
        n--;
    } while(n > 1);
    
    cout << prod << endl;
    
    // Determine whether an integer number is prime or not
    bool isPrime = true;
    
    if (n < 2) {
        isPrime = false;

        cout << "Not prime" << endl;

        return 0;
    }

    // n = a * b
    // n = sqrt(n) * sqrt(n)
    for (int i = 2; i < sqrt(n); ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime) {
        cout << "Prime" << endl;
    } else {
        cout << "Not prime" << endl;
    }
    
    // Infinite loops
    for (;;) {
        // infinte loop
    }
    
    while (true) {
        break;
    }
    
    do {
        
    } while(true);
    
    // Finding m-th Fibonaci number
    int f0 = 1, f1 = 1;
    int m, fm; 
    
    cin >> m;

    for(int i = 1; i < m; ++i){
        fm = f0 + f1;
        f0 = f1;
        f1 = fm;
    }
     
    cout << fm << endl;
    
    // Input integer number n and find the sum
    // of all even numbers which are not devisible by 7
    int n;
    cin >> n;
    
    int sum = 0;
    for(int i = 1; i <= n; i+=2){
        if(i % 7 != 0){
            sum += i;
        }
        
        // if (i % 7 == 0) {
        //     continue;
        // }
        
        // sum += i;
    }
    cout << sum << endl;
    
    // 010010110101
    // 000000000001
    // result -> 000000000001 -> 2^0=1
    
    // 001001011010
    // 000000000001
    // result -> 000000000000 -> 0
    
    // 000100101101
    
    // 0000000101 -> 1010
    
    // Output the binary representation of
    // integer number in reversed order
    int n;
    cin >> n;
    
    // Not full solution
    while(n != 0){
        cout << n & 1;
        n >>= 1;
    }
    
    // Full solution
    int mask = 1;
    
    while (mask != 0) {
        if (n & mask) {
            cout << 1;
        } else {
            cout << 0;
        }
        
        mask <<= 1;
    }

    cout << endl;
    
    // 010010110101
    // 000000000001
    // 1
    
    // 010010110101
    // 000000000010
    
    // ...
    
    // 010010110101
    // 100000000000
    
    // 000000000101
    
    // 010010110101
    // |
    // 001000001001
    // 011010111101
    
    // ^ 
    // 0 ^ 0 -> 0
    // 0 ^ 1 -> 1
    // 1 ^ 0 -> 1
    // 1 ^ 1 -> 0
    
    // >>n -> /2^n
    // <<n -> *2^n
    
    // Output all perfect numbers from 2 to n
    int n;
    do {
        cout << "n=";
        cin >> n;
    } while (n <= 0);
    
    // 6 = 1 + 2 + 3
    // 6 / 2
    // 4,5,6
    // 22 = 1 * 2 * 11
    // 11
    // 25 = 1 * 5 * 5
    // 25 / 2 = 12
    for (int i = 2; i <= n; ++i) {
        int sum = 1;
        
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                sum += j;
            }
        }
        
        if (sum == i) {
            cout << i << endl;
        }
    }
    
    // Find all numbers which contains 5 from m to n
    // where 0 <= m < n
    int n, m;

    do {
        cin >> m >> n;
    } while(m<0 || n <= m);
    
    for (int i = m; i <= n; ++i){
        int x = i;
        while(x!=0){
            if(x % 10 == 5){
                cout << i << endl;
                break;
            }
            x = x / 10;
        }
        
        while (x != 0 && x % 10 != 5) {
            x /= 10;
        }
        
        if (x != 0) {
            cout << i << endl;
        }
    }
    
    return 0;
}