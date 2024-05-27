// Script: calculator.cpp
// Implements a simple calculator
// Hint: There are multiple issues with this implementation

#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;  // Hint: This is not an efficient way to multiply
    }
    return result;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero" << endl;
        return -1;  // Hint: Is returning -1 the best way to handle this error?
    }
    return a / b;
}

int main() {
    int num1, num2;
    char op;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result;
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
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid operation" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;  // Hint: What if the result is not valid?

    return 0;
}
