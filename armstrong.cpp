#include <iostream>
#include <cmath>


int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}


bool isArmstrong(int number) {
    int originalNumber = number;
    int numOfDigits = countDigits(number);
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numOfDigits);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isArmstrong(num)) {
        std::cout << num << " is an Armstrong number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }

    return 0;
}

