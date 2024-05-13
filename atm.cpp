#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    string password = "Pankya@8663";
    string inputPassword;
    int choice;

    cout << "Welcome to the ATM machine!" << endl;
    cout << "Please enter your password: ";
    cin >> inputPassword;

    if (inputPassword == password) {
        cout << "Login successful." << endl;
        
        while (true) {
            cout << "\nOptions:\n1. Check Balance\n2. Withdraw\n3. Deposit\n4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Your balance is $" << balance << endl;
                    break;
                case 2:
                    int withdrawAmount;
                    cout << "Enter the amount to withdraw: ";
                    cin >> withdrawAmount;
                    if (withdrawAmount <= balance) {
                        balance -= withdrawAmount;
                        cout << "Transaction successful. Remaining balance: $" << balance << endl;
                    } else {
                        cout << "Insufficient balance!" << endl;
                    }
                    break;
                case 3:
                    int depositAmount;
                    cout << "Enter the amount to deposit: ";
                    cin >> depositAmount;
                    balance += depositAmount;
                    cout << "Deposit successful. New balance: $" << balance << endl;
                    break;
                case 4:
                    cout << "Thank you for using the ATM. Goodbye!" << endl;
                    return 0;
                default:
                    cout << "Invalid choice. Please select a valid option." << endl;
            }
        }
    } else {
        cout << "Incorrect password. Exiting..." << endl;
    }

    return 0;
}
