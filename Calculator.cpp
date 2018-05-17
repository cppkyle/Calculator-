#include <iostream>
#include <string>
using namespace std;

int main()
{
	double firstNumber;
	double secondNumber;
	string calculationType;
	double calculated;
	
	cout << "Enter the first number to calculate: " << endl;
	cin >> firstNumber;
	
	cout << "Enter the second number to calculate: " << endl;
	cin >> secondNumber;
	
	cout << "Enter the calculation to do: [+,-,*,/] " << endl;
	cin >> calculationType;
	
	
	if ( calculationType == "*" ) {
		calculated = firstNumber * secondNumber;
	} else if ( calculationType == "/" ) {
		calculated = firstNumber / secondNumber;
	} else if ( calculationType == "+" ) {
		calculated = firstNumber + secondNumber;
	} else if ( calculationType == "-" ) {
		calculated = firstNumber - secondNumber;
	} else {
		cout << "The calculation type is not valid!" << endl;
		main();
	}
	
	cout << firstNumber << " " << calculationType << " " << secondNumber << " = " << calculated << endl;
	return 0;
}
