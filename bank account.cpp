#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    std::string accountNumber;
    double balance;

public:
    
    BankAccount(const std::string& name, const std::string& number, double initialBalance) 
        : accountHolderName(name), accountNumber(number), balance(initialBalance) {
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << " into account " << accountNumber << std::endl;
        } else {
            std::cout << "Invalid amount for deposit." << std::endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn: $" << amount << " from account " << accountNumber << std::endl;
        } else {
            std::cout << "Invalid amount or insufficient balance." << std::endl;
        }
    }

    
    void display() const {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    
    BankAccount myAccount("John Doe", "123456789", 1000.0);

    
    std::cout << "Initial Account Details:" << std::endl;
    myAccount.display();

    
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    
    std::cout << "\nUpdated Account Details:" << std::endl;
    myAccount.display();

    return 0;
}

