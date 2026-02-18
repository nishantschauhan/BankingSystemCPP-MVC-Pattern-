#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
using namespace std;

// ===== VIEW =====
void displayMenu() {
    cout << "\n========= Simple Banking System =========" << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Check Balance" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

void displayMessage(const string& message) {
    cout << message << endl;
}

void displayAccountInfo(const string& accNumber, const string& name, double balance) {
    cout << "Account Number: " << accNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: $" << balance << endl;
}

#endif
