#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 7;

    cout << (a & b) << endl; // 5
    cout << (a | b) << endl; // 7
    cout << (a ^ b) << endl; // 2

    int c;
    cin >> c;
    bool result = ((c >> 3) & 1) ? 1 : 0;

    /**
    *
    * Input age and gender and output a salutation
    * according to the gender and the age
    *
    **/
    char a;
    int age;

    cin >> age;
    cin >> a;

    if (age >= 16 && a == 'm')
    {
        cout << "Mr" << endl;
    }
    else if (age < 16 && a == 'm')
    {
        cout << "master" << endl;
    }
    else if (age >= 16 && a == 'f')
    {
        cout << "Ms" << endl;
    }
    else if (age < 16 && a == 'f')
    {
        cout << "Miss" << endl;
    }

    if (age <= 16) {
        if (a == 'm') {
            cout << "Mr" << endl;
        }
        else if (a == 'f') {
            cout << "Ms" << endl;
        }
    }
    else {
        if (a == 'm') {
            cout << "Mater" << endl;
        }
        else if (a == 'f') {
            cout << "Miss" << endl;
        }
    }

    /**
    *
    * Input a figure type (s, r, c or t) and find its area.
    * - if s -> input one side
    * - if r -> input two sides
    * - if c -> input radius
    * - if t -> input side and height
    *
    **/
    char fig;
    cin >> fig;
    const pi = 3.14;
    double area;

    switch (fig) {
        case 's': {
            double a;
            cin>> a;

            area = a * a;

            break;
        }
        case 'r': {
            double a, b;
            cin >> a >> b;

            area = a * b;

            break;
        }
        case 'c': {
            double r;
            cin >> r;

            area = pi * r * r;

            break;
        }
        case 't': {
            double c, h;
            cin >> c >> h;

            area = c * h / 2;
            
            break;
        }
        default:
            area = 0;
    }

    cout << "The figure area is " << area << endl;

    int fiveHoursBonus = 10;
    int tenHoursBonus = 20;
    int hours;
    cin >> hours; // 4
    int salary;
    cin >> salary; // 2000
     
    if (hours <= 5) {
        int salary = 1500;
        salary += fiveHoursBonus;
        cout << salary << endl; // 1510
    }
    else if (hours > 5 && hours <= 10) {
        salary += tenHoursBonus;
        cout << salary << endl; // 2020
    }

    cout << salary; // 2000

    return 0;
}
