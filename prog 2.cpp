#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    double average;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    average = (num1 + num2 + num3) / 3.0;

    cout << "The average of the three numbers is: " << average << endl;

    return 0;
}
