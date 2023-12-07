// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char choice;
	do
	{

		double a, b;
		char operation;
		cout << "Enter the first number: ";
		cin >> a;
		cout << "Enter the second number: ";
		cin >> b;
		cout << "Enter the operation: " << "Can be (+,-,/,*,%)";
		cin >> operation;
		switch (operation)
		{
			case
			'+':
				cout << a << " + " << b << " = " << a + b;
				break;
				case
				'-':
					cout << a << " - " << b << " = " << a - b;
					break;
					case
					'*':
						cout << a << " * " << b << " = " << a * b;
						break;
						case
						'/':
							cout << a << " / " << b << " = " << a / b;
							break;
							case
							'%':
								cout << a << " % " << b << " = " << (int)a % (int)b;
								break;
							default:
								cout << "Error! The operator is not correct";
								break;

		}
		cout << "\nDo you want to continue? (y/n)";
		cin >> choice;

	} while (choice == 'Y' || choice == 'y');
	return 0;

}


