#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientFundsException : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient funds for this withdrawal.";
    }
};

class InvalidAmountException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid amount for withdrawal.";
    }
};

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {
        if (balance < 0) {
            balance = 0;
        }
    }

    void withdraw(double amount) {
        if (amount < 0) {
            throw InvalidAmountException();
        }
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    double initialBalance;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(initialBalance);
    
    double withdrawalAmount;
    cout << "Enter amount to withdraw: ";
    cin >> withdrawalAmount;

    try {
        account.withdraw(withdrawalAmount);
        cout << "Withdrawal successful. Remaining balance: " << account.getBalance() << endl;
    } catch (const InsufficientFundsException& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const InvalidAmountException& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
