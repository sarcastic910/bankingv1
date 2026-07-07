#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountName;
    int age;
    string address;
    int pin;
    double balance = 0;

public:
    void balance_check()
    {
        cout << "\n----------------------------------\n";
        cout << "Current Balance: " << balance << endl;
        cout << "----------------------------------\n";
    }

    void deposite()
    {
        double amount;

        cout << "\nEnter the amount to be deposited: ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            cout << "\nDeposit Successful!" << endl;
        }
        else
        {
            cout << "\nInvalid amount entered!" << endl;
        }
    }

    void withdraw()
    {
        double amount;

        cout << "\nEnter the amount to be withdrawn: ";
        cin >> amount;

        if (amount > 0)
        {
            if (amount > balance)
            {
                cout << "\nInsufficient Balance!" << endl;
            }
            else
            {
                balance -= amount;
                cout << "\nWithdrawal Successful!" << endl;
            }
        }
        else
        {
            cout << "\nInvalid amount entered!" << endl;
        }
    }

    void create_account()
    {
        cout << "\n========== CREATE ACCOUNT ==========\n";

        cout << "Enter Account Number : ";
        cin >> accountNumber;
        cin.ignore();

        cout << "Enter Account Name   : ";
        getline(cin,accountName);

        cout << "Enter Age            : ";
        cin >> age;
        cin.ignore();

        cout << "Enter Address        : ";
         getline(cin, address);

        cout << "Enter PIN            : ";
        cin >> pin;

        cout << "\n====================================\n";
        cout << "Account Created Successfully!" << endl;
        cout << "====================================\n";
    }
};

int main()
{
    BankAccount B1;
    int choice;

    do
    {
        cout << "\n====================================\n";
        cout << "      BANK MANAGEMENT SYSTEM\n";
        cout << "====================================\n";
        cout << "1. Create Account\n";
        cout << "2. Check Balance\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "0. Exit\n";
        cout << "====================================\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            B1.create_account();
            break;

        case 2:
            B1.balance_check();
            break;

        case 3:
            B1.deposite();
            break;

        case 4:
            B1.withdraw();
            break;

        case 0:
            cout << "\nThank you for using our Banking System!\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}