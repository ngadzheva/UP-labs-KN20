#include <iostream>
using namespace std;

type name(arguments) {
    
}

double calculateRectangleArea(double a, double b) {
    double area = a * b;
    
    return area;
}

// float calculateRectangleArea(double a, double b) {
//     float area = a * b;
    
//     return area;
// }
bool isLeap(int);
bool isMonthAndDayValid(int,int, int);
int compare(int, int);
int compare(char, char);
int compare();

void hello() {
    cout << "Hello, world" << endl;
}

int getSquareOfFive() {
    return 5 * 5;
}

int main() {
    int n;
    
    do {
        cin >> n;
    } while(n < 0);
    
    bool digitMoreThanOnce = false;
    
    while (n > 0 && !digitMoreThanOnce) {
        int n1 = n;
        int currDigit = n % 10;
        
        while (n1 > 0 && currDigit != n1 % 10) {
            n1 /= 10;
        }
        
        if (n1 != 0) {
            digitMoreThanOnce = true;
        }
        
        n /=10;
    }
    
    if (digitMoreThanOnce)
        std::cout << "A digit occured more than onece\n";
    else
        std::cout << "No digit occured twise.\n";
        
    double a, b;
    cin >> a >> b;
    
    double doubleRecArea = 2 * calculateRectangleArea(a, b);
    compare(6, 5);
    compare('a', 'b');
    hello(); // Hello, world
    int result = getSquareOfFive();
    
    int year1, year2, month1, month2, day1, day2;
    cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2;
    
    bool isValidDate1 = isMonthAndDayValid(year1, month1, day1);
    bool isValidDate2 = isMonthAndDayValid(2019, 12, 31);
    isMonthAndDayValid(2018, 02, 31);
    
    double arr[5];
    arr[0] = 20.5;
    arr[1] = 15.5;
    ...
    arr[4] = 35.2;
    
    char sym[5] = {'a', 'b', 'c', 'd', 'e'};
    char c = sym[2];
    
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    
    
    int days[7] = {1, 2, 3, 4};
    
    int n;
    cin >> n;
    
    int numbers[n];
    
    for(int i = 0; i <= n - 1; ++i) {
        cin >> number[i];
    }
    
    int numbers[20];
    for(int i = 0; i < 20; ++i) {
        numbers[i] = i * 5;
    }
    for(int i = 19; i >= 0; --i) {
        cout << numbers[i];
    }
    
    int m;
    cin >> m;
    
    int array[m];
    
    for(int i = 0; i < m; ++i) {
        cin >> array[i];
    }
    
    int reversed[m];
    
    for(int i = 0; i < m; ++i) {
        reversed[m - i - 1] = array[i];
    }
    
    for(int i = 0; i < m; ++i) {
        array[i] = reversed[i];
    }
    
    
    return 0;
}

int compare(int num1, int num2) {
    if (num1 > num2) {
        return 1;
    }
    
    if (num1 == num2) {
        return 0;
    } 
    
    return -1;
    
    int sum = num1 + num2;
}

int compare(char sym1, char sym2) {
    if (sym1 < sym2) {
        return -1;
    }
    
    if (sym1 == sym2) {
        return 0;
    } 
    
    return 1;
}
bool isLeap(int yearNum){
    if ((yearNum%4==0)&&(yearNum%100!=0)||(yearNum%400==0))
        return true;
    else{
        return false;
    }
}
bool isMonthAndDayValid(int year, int month,int day){
    bool isMonthValid = month < 13 && month > 0;
    bool is30DaysMonth = month == 4 || month == 6 || month == 9 || month == 11;
    bool isLeapYear = isLeap(year);
    bool isFebruary = month == 2;
    bool isDayValid = day > 0 && ((is30DaysMonth && day < 31) || (!is30DaysMonth && day < 32) || (isLeapYear && isFebruary && day < 30) || (!isLeapYear) && isFebruary && day < 29);
    
    return isMonthValid && isDayValid;
}