#include <iostream>

void showBalance(double balance)
{
    std::cout << "Your balance is: $ " << balance << '\n';
}

void deposit(double &balance)
{
    double amount;
    std::cout << "Enter the amount to deposit: $ ";
    std::cin >> amount;
    if (amount > 0)
    {
        balance += amount;
        std::cout << "Deposit successful.\n";
    }
    else
    {
        std::cout << "Invalid deposit amount.\n";
    }
}

void withdraw(double &balance)
{
    double amount;
    std::cout << "Enter the amount to withdraw: $ ";
    std::cin >> amount;
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        std::cout << "Withdrawal successful.\n";
    }
    else
    {
        std::cout << "Invalid withdrawal amount or insufficient funds.\n";
    }
}

int main()
{
    int choice = 1000;
    double balance = 0;

    do
    {
        std::cout << "*******************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "*******************\n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit Money \n";
        std::cout << "3. Withdraw Money \n";
        std::cout << "4. Exit from bank \n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            deposit(balance);
            showBalance(balance);

            break;
        case 3:
            withdraw(balance);
            showBalance(balance);

            break;
        case 4:
            std::cout << "Thanks for visiting \n";
            break;
        default:
            std::cout << "Invalid choice  \n";
            break;
        }
    } while (choice != 4);

    return 0;
}
