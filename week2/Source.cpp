#include <iostream>
using namespace std;

int main() {
  /**
   * 
   * Given 2 trapezoid base sides (a and b) and 
   * its height (h) calculate its area.
   * 
   **/
  double a, b, h, area;
  cin >> a >> b >> h;
  
  area = ( a + b ) * h / 2;
  cout << "Area: " << area << endl;
  
  int c = 5;
  c = c + 1;
  // Incrementation
  int d = ++c; // prefix -> d = 7, c = 7
  int f = c++; // postfix -> f = 7, c = 8
  // Decrementation
  --c;
  c--;
  c *= 5; // c = c * 5
  
  int e = 6;
  cout << (e != c) << endl; // 0
  
  /**
   * 
   * Given the coordinates of the two diagonal vertices of a rectangle
   * (x1, y1) and (x2, y2) and the coordinates of a point (x, y), find 
   * whether the point is:
   * a) inside the rectangle
   * b) outside the rectangle
   * 
   **/
  double x1, x2, y1, y2, x, y;
  cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
  
  bool isInside = x >= x1 && x <= x2 && y <= y1 && y >= y2;
  bool isOutside = x < x1 || x > x2 || y > y1 || y < y2;
  
  
  /**
   * 
   * Given an integer number, find out whether it is valid or not.
   * The number is valid if it is between 100 and 200 or is 0.
   * 
   **/ 
  int number;
  cin >> number;
  bool isValid = (number >= 100 && number <= 200) || number == 0;

  /**
   * 
   * Given a grade:
   * - output "Excellent" if it is greater than 5.5
   * - output "Good" if it is between 4.5 and 5.5
   * - otherwise output "Bad"
   * 
   **/ 
  double grade;
  cin >> grade;
  if (grade>=5.50) {
    cout<<"Excellent"<<endl;
  } else if (grade >= 4.50 && grade < 5.50) {
    cout << "Good!" << endl;
  } else {
    cout << "Bad!" << endl;
  }

  /**
   * 
   * Given an integer number - number of points, add bonus points following the below rules:
   * - if the number is not greater than 100, the bonus points are 5
   * - if the number is greater than 100, the bonus points are 20% of the number
   * - if the number is not greater than 1000, the bonus points are 10% of the number
   * Additional bonus points are added for:
   * - even number - +1 point
   * - number ending in 5 - +2 points
   * 
   **/ 
  int num,bonus;
  cin >> num;

  if(num <= 100) {
    bonus = 5;
  } else if(num > 100 && num <= 1000) {
    bonus = num * 0.2;
  } else if(num > 1000) {
    bonus = num * 0.1;
  }

  if(num % 2 == 0) {
    bonus += 1; // ++bonus;
  }

  if(num % 10 == 5) {
    bonus += 2;
  }

  num += bonus;

  // Ternary operator
  bonus = num > 100 ? 5 : 0;
  
  return 0;
}