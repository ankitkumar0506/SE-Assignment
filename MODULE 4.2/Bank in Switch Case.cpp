#include<iostream>
#include<string>

class BankAccount {
private:
    std::string name;
    std::string accountNumber;
    std::string accountType;
    double balance;

public:
    // Constructor to assign values
    BankAccount(std::string depositorName, std::string accountNum, std::string accountType)
        : name(depositorName), accountNumber(accountNum), accountType(accountType), balance(0.0) {}

    // Function to deposit an amount
    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            std::cout << "Deposited " << amount << " to account. New balance: " << balance << std::endl;
        }
		else
		{
            std::cout << "Invalid deposit amount. Amount must be greater than 0." << std::endl;
        }
    }

    // Function to withdraw an amount after checking balance
    void withdraw(double amount) 
	{
        if (balance >= amount && amount > 0) 
		{
            balance -= amount;
            std::cout << "Withdrew " << amount << " from account. New balance: " << balance << std::endl;
        } 
		else if (amount <= 0) 
		{
            std::cout << "Invalid withdrawal amount. Amount must be greater than 0." << std::endl;
        } 
		else 
		{
            std::cout << "Insufficient balance." << std::endl;
        }
    }

    // Function to display name and balance
    void display()
	{
        std::cout << "Account Holder: " << name << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Account Balance: " << balance << std::endl;
    }
};

int main() 
{
    std::string name, accountNumber, accountType;
    double initialDeposit;

    // Input account details from the user
    std::cout << "Enter the name of the account holder... ";
    std::getline(std::cin, name);

    std::cout << "Enter the account number... ";
    std::getline(std::cin, accountNumber);

    std::cout << "Enter the account type... (e.g., Savings, Checking, etc....) s";
    std::getline(std::cin, accountType);

    std::cout << "Enter the initial deposit amount... ";
    std::cin >> initialDeposit;

    // Create a bank account object
    BankAccount account(name, accountNumber, accountType);

    // Perform the initial deposit
    account.deposit(initialDeposit);

    // Interaction loop with the account
    int choice;
    double amount;

    do {
        std::cout << "\nChoose an action:\n";
        std::cout << "1. Deposit...\n";
        std::cout << "2. Withdraw...\n";
        std::cout << "3. Display account details...\n";
        std::cout << "4. Exit...\n";
        std::cout << "Enter your choice:... ";
        std::cin >> choice;

        switch (choice) 
		{
            case 1:
                std::cout << "Enter the amount to deposit... ";
                std::cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                std::cout << "Enter the amount to withdraw... ";
                std::cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.display();
                break;

            case 4:
                std::cout << "Exiting the program....\n";
                break;

            default:
                std::cout << "Invalid choice... Try again....\n";
        }
    } while (choice != 4);

    
}
