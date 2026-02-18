#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.h"
#include "view.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ===== CONTROLLER =====
void createAccount() {
    Account acc;
    cout << "Enter Account Number: ";
    cin >> acc.accountNumber;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, acc.name);
    acc.balance = 0.0;

    vector<Account> accounts = loadAccounts();
    if (findAccount(accounts, acc.accountNumber)) {
        displayMessage("Account already exists!");
        return;
    }

    accounts.push_back(acc);
    saveAccounts(accounts);
    displayMessage("Account created successfully!");
}

void deposit() {
    string accNumber;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNumber;
    cout << "Enter Amount to Deposit: ";
    cin >> amount;

    vector<Account> accounts = loadAccounts();
    Account* acc = findAccount(accounts, accNumber);
    if (acc) {
        acc->balance += amount;
        saveAccounts(accounts);
        displayMessage("Deposit successful!");
    } else {
        displayMessage("Account not found!");
    }
}

void withdraw() {
    string accNumber;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNumber;
    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    vector<Account> accounts = loadAccounts();
    Account* acc = findAccount(accounts, accNumber);
    if (acc) {
        if (acc->balance >= amount) {
            acc->balance -= amount;
            saveAccounts(accounts);
            displayMessage("Withdrawal successful!");
        } else {
            displayMessage("Insufficient balance!");
        }
    } else {
        displayMessage("Account not found!");
    }
}

void checkBalance() {
    string accNumber;
    cout << "Enter Account Number: ";
    cin >> accNumber;

    vector<Account> accounts = loadAccounts();
    Account* acc = findAccount(accounts, accNumber);
    if (acc) {
        displayAccountInfo(acc->accountNumber, acc->name, acc->balance);
    } else {
        displayMessage("Account not found!");
    }
}

#endif
