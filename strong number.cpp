#include <iostream>


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


bool isStrongNumber(int number) {
    int originalNumber = number;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isStrongNumber(num)) {
        std::cout << num << " is a strong number." << std::endl;
    } else {
        std::cout << num << " is not a strong number." << std::endl;
    }

    return 0;
}

