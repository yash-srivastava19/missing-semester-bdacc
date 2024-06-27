#include <iostream>
#include <limits>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;  // Using built-in multiplication for efficiency
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero" << endl;
        return numeric_limits<int>::min();  // Return a special value for error indication
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

    // Check for division by zero error
    if (op == '/' && result == numeric_limits<int>::min()) {
        // Error message already printed in divide function
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
