#include <iostream>
using namespace std;

int main() {
	cout << "Hello, world!" << endl;

	int age;
	age = 20;

	long int idNumber = 230236365;

	idNumber = age;

	double weight = 40.55;

	age = (int) weight;

	char id = 'B';
	age = id;

	cout << age << endl;

	int firstNumber = 5;
	int secondNumber = 10;
	int temp = firstNumber;
	firstNumber = secondNumber;
	secondNumber = temp;

	const int myConst = 30;
	/* myConst = firstNumber; */

	char firstName, lastName, gender;
	short age1;
	int employeeNumber;
	unsigned short idNumber1;

	cout << "First name: "; cin >> firstName;
	cout << "Last name: "; cin >> lastName;
	cout << "Age: "; cin >> age1;
	cout << "Gender: "; cin >> gender;
	cout << "ID Number: "; cin >> idNumber1;
	cout << "Employee number: "; cin >> employeeNumber;

	cout << "-----------------------------------------------------------------------" << endl;
	cout << "| First Name | Last Name | Age | Gender | ID Number | Employee Number |" << endl;
	cout << "|     " << firstName << "      |     " << lastName << "     | ";
	cout << age1 << "  |   " << gender << "    |   " << idNumber1 << "   |  " << employeeNumber << "   |" << endl;
	cout << "-----------------------------------------------------------------------" << endl;

	cout << firstNumber + secondNumber << endl;
	cout << firstNumber - secondNumber << endl;
	cout << firstNumber * secondNumber << endl;
	cout << secondNumber / firstNumber << endl;
	int result = secondNumber / firstNumber;
	cout << 7 / 2 << endl; // 3
	cout << 7.5 / 2 << endl; // 3.75 -> double
	cout << 7.5 / 3.5 << endl; // -> double/float
	cout << 9 / 1.5 << endl; // -> double/float
	result = secondNumber % firstNumber;
	cout << 7 % 2 << endl; // -> 1
	cout << 7 / 0 << endl; // runtime error
	cout << 7 / 0.0 << endl; // inf
	cout << 0.0 / 0.0 << endl; // nan
	cout << 7 * 1.0 / 5 << endl;

	// Find the area of a square by one of its sides
	double a;
	cout << "a= " << endl;
	cin >> a;
	cout << "The area of the square is: " << a * a << endl;

	return 0;
}