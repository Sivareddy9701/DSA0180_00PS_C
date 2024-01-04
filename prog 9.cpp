#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping using XOR operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

