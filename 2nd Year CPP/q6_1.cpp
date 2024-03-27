#include<iostream>
#include<string>
using namespace std;

class Bank {
private:
    string name;
    long long actno;
    string acttype;
    double balanceAmount;
    static int trans; // Static data member to keep track of transactions

public:
    // Member function to read inputs
    void read() {
        cout << "Enter Account Holder Name: ";
        cin.ignore(); // Ignore any previous newline characters
        getline(cin, name);
    
        cout << "Enter Account Number: ";
        cin >> actno;

        cout << "Enter Account Type: ";
        cin.ignore();
        getline(cin, acttype);

        cout << "Enter Balance Amount: ";
        cin >> balanceAmount;
    }

    // Member function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balanceAmount += amount;
            trans++;
            cout << "Deposit Successful. Current Balance: " << balanceAmount << endl;
        } else {
            cout << "Invalid deposit amount. Amount must be greater than 0." << endl;
        }
    }

    // Member function to withdraw amount after checking current balance
    void withdraw(double amount) {
        if (amount > 0 && balanceAmount >= amount) {
            balanceAmount -= amount;
            trans++;
            cout << "Withdrawal Successful. Current Balance: " << balanceAmount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Static member function to display the number of transactions
    static void displaytrans() {
        cout << "Total Number of Transactions: " << trans << endl;
    }
};

// Initialize static data member outside the class
int Bank::trans = 0;

int main() {
    Bank myAccount;
    myAccount.read();

    int choice;
    double amount;

    do {
        cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Display Number of Transactions\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                myAccount.deposit(amount);
                break;
            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                myAccount.withdraw(amount);
                break;
            case 3:
                myAccount.displaytrans();
                break;
            case 4:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
