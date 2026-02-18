#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// ===== MODEL =====
struct Account {
    string accountNumber;
    string name;
    double balance;
};

// Load accounts from file
vector<Account> loadAccounts() {
    vector<Account> accounts;
    ifstream file("accounts.txt");
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        Account acc;
        ss >> acc.accountNumber >> acc.name >> acc.balance;
        accounts.push_back(acc);
    }
    return accounts;
}

// Save accounts to file
void saveAccounts(const vector<Account>& accounts) {
    ofstream file("accounts.txt");
    for (auto& acc : accounts) {
        file << acc.accountNumber << " " << acc.name << " " << acc.balance << "\n";
    }
}

// Find account by account number
Account* findAccount(vector<Account>& accounts, const string& accNumber) {
    for (auto& acc : accounts) {
        if (acc.accountNumber == accNumber)
            return &acc;
    }
    return nullptr;
}

#endif
