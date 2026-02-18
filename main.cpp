#include "controller.h"
#include "view.h"
#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: displayMessage("Exiting..."); break;
            default: displayMessage("Invalid choice!"); break;
        }

    } while (choice != 5);

    return 0;
}
