#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if(num2 != 0) {
        cout << "Division: " << num1 / (double)num2 << endl;
        cout << "Modulo: " << num1 % num2 << endl;
    } else {
        cout << "Cannot perform division or modulo operations with 0" << endl;
    }

    return 0;
}
