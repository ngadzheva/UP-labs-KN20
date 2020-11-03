#include <iostream>
#include <cmath>
using namespace std;

int main() {
  // x = a || (b && c)

  bool a, b, c;
  bool x;
  cin >> a >> b >> c;

  if (a) {
    x = true;
  } else {
    if (b) {
      if (c) {
        x = true;
      } else {
        x = false;
      }
    } else {
      x = false;
    }
  }

  int x, y;
  double result = -x / 2 * y;
  result = -x / (2 * y);

  // swap 2 numbers

  int a = 5;
  int b = 10;

  int temp = a;
  a = b;
  b = temp;

  // swapping using bitwise operators

  // 00010100 // a
  // 10110011 // b

  // 10100111 // a
  
  // 10110011
  // 10100111

  // 00010100 // b

  // 10100111
  // 00010100

  // 10110011 // a

  a ^= b; // a = a ^ b
  b ^= a; // b = b ^ a
  a ^= b; // a = a ^ b

  // encryption of integer number using the following rules:
  // - replace every digit with (digit + 7)%10
  // - swap the first digit with the third digit and the second digit with the forth one

  int num = 5236;
  int firstDigit = num % 10;
  int secondDigit = (num / 10) % 10;
  int thirdDigit = (num / 100) % 10;
  int forthDigit = (num / 1000) % 10;

  firstDigit = (firstDigit + 7) % 10;
  secondDigit = (secondDigit + 7) % 10;
  thirdDigit = (thirdDigit + 7) % 10;
  forthDigit = (forthDigit + 7) % 10;

  int tempDigit;
  tempDigit = firstDigit;
  firstDigit = thirdDigit;
  thirdDigit = tempDigit;

  tempDigit = secondDigit;
  secondDigit = forthDigit;
  forthDigit = tempDigit;

  num = firstDigit + secondDigit * 10 + thirdDigit * 100 + forthDigit * 1000;

  // Enter n numbers and find the max number among them
  int n;
  cin >> n;

  int max, num;
  cin >> num;
  max = num;

  for (int i = 1; i < n; ++i) {
    cin >> num;

    if (num > max) {
      max = num;
    }
  }

  cout << max << endl;

  // Enter n number. Find the sums of the numbers on even and odd positions.
  // Check whether the two sums are equal or not.
  // If they are equal, print the sum, else print their absolute difference

  int n, number;
  int sumOdd = 0;
  int sumEven = 0;
  
  cin >> n;
  
  for(int i = 0; i < n; i++) {
      cin >> number;
      
      if (i % 2 == 0) {
          sumEven += number;
      } else {
          sumOdd += number;
      }
  }
  
  if (sumEven == sumOdd) {
      cout << "Yes" << endl;
      cout << "Sum=" << sumEven;
  } else {
      cout << "No" << endl;
      cout << abs(sumEven-sumOdd);
  }
  
  // Nested for loops

  for (int i = 0; i < 100; ++i) {
      for (int j = 0; j < 10; ++j) {
          // some logic
      }
      
      // some logic
  }
  
  // Print the following NxN square
  // For n = 5:
  // +---+
  // |---|
  // |---|
  // |---|
  // +---+

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
          if ((i == 0 || i == n - 1) && (j == 0 || j == n - 1)) {
              cout << "+";
          }
          else if (j == 0 || j == n - 1) {
              cout << "|";
          }
          else {
              cout << "-";
          }
      }
      cout << "\n";
  }
  
  // Find the GCD of two int numbers
  // Using the Euclid algorithm

  // a = 16 b = 2
  // 16 % 2
  // b = 0 
  // a = 2
  
  int a, b;
  cin >> a >> b;
  
  while (b != 0) {
      int temp = b;
      b = a % b;
      a = temp;
  }
  
  cout << "GCD = " << a << endl;

  // GCD of two numbers without using the Euclid algorithm
  
  while (a != b) {
      if (a > b) {
          a = a - b;
      } else {
          b = b - a;
      }
  }

  return 0;
}