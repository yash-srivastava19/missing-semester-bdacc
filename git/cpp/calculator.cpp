// Script: calculator.cpp
// Implements a simple calculator
// Hint: There are multiple issues with this implementation

#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    int result = a;
    result *= b;  //This is an efficient way to multiply rather than repeated addition
    
    return result;
}

bool candivide(int a,int b)
{
	if(b==0)
		return false;
	else
		return true;
}
int divide(int a, int b) {
    
    return a / b;
}

int main() {
    int num1, num2;
    char op;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result;
    bool chkres=true;
    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
	    chkres=candivide(num1,num2);
	    if(chkres)
	    result = divide(num1, num2);
            break;
        default:
            cout << "Invalid operator" << endl;
            return 1;
    }

    cout << ( chkres ? "Result: " + to_string(result) : "Invalid operands") << endl;  // Checking for validity of result using ternary operator
	return 0;
}
