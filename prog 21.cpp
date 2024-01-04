#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num, originalNum, remainder, sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    if (sum == originalNum) {
        cout << originalNum << " is a strong number." << endl;
    } else {
        cout << originalNum << " is not a strong number." << endl;
    }

    return 0;
}

