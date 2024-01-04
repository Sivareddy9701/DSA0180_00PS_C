#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Enter the third integer: ";
    cin >> num3;

    int maxNum = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}
