# BankingMVC

A **Banking System** implemented in **C++** following the **Model-View-Controller (MVC) design pattern**.  
This project demonstrates clean software architecture, separating **business logic**, **user interface**, and **application flow**, making it modular, scalable, and easy to maintain.

---

## **Features**

- Create and manage bank accounts
- Deposit and withdraw money
- View account details
- Update account information
- Delete accounts
- Uses **MVC architecture** for better code organization

---


- **Model:** Handles all account data and calculations  
- **View:** Displays menus, prompts, and results to the user  
- **Controller:** Orchestrates interactions between Model and View

---

BankingMVC/                    

    ├── README.md              # Project description 
    ├── main.cpp               # Entry point of the application
    ├── model.h                # Model: handles business logic and account data    
    ├── view.h                 # View: handles user interface and input/output
    ├── controller.h           # Controller: coordinates Model and View
    



## **How to Compile & Run**

1. Open terminal in the project folder
2. Compile using `g++`:

```bash
g++ main.cpp -o banking

./banking
