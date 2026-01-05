🏦 Simple Bank Management System
A beginner-friendly C++ console application that simulates basic banking operations with user account management. Perfect for learning core C++ programming concepts like structures, arrays, file handling, and menu-driven program design.

✨ Features
User Account Creation: Register new bank accounts with a unique username and a 3-digit PIN.

Secure Login System: PIN-based verification for accessing individual accounts.

Balance Management: Check your current balance and make deposits.

Deposit Simulation: Experience a simple mock payment gateway to add funds to your account.

Data Persistence: User account data is automatically saved to and loaded from users.txt.

Multi-User Support: An array-based system capable of managing up to 100 user accounts.

🛠️ Tech Stack
Language: C++

Key Concepts: Structures (struct), Arrays, File I/O (fstream), Control Flow

Data Storage: Plain text file (users.txt)

🚀 Getting Started
Prerequisites
A C++ compiler (like g++, MinGW, or MSVC in Visual Studio)

A terminal or command prompt

Compilation & Running
Clone or Download the project files to your local machine.

Navigate to the project directory in your terminal.

Compile the main C++ source file (commonly named main.cpp or similar):

bash
g++ -o bank_app main.cpp
Run the executable:

bash
./bank_app       # On Linux/macOS
bank_app.exe     # On Windows
📖 How to Use
First Launch
On the first run, the program will automatically create a users.txt file in the same directory to serve as the account database. If the file is empty, you can start by creating a new account.

Creating an Account
From the main menu, select the option to Create Account.

Enter a unique username (login ID).

Set a secure 3-digit PIN (between 100 and 999).

Optionally, you can make an initial deposit.

Your account details are saved to the file automatically upon creation.

Logging In & Using Your Account
From the main menu, select Login.

Enter your username and PIN.

Upon successful login, access your account dashboard to:

✅ Check Balance

💰 Make a Deposit

↩️ Logout securely

📁 Project Structure
text
bank-simulator/
├── main.cpp (or similar primary source file)  # Main program logic
├── users.txt                                  # Auto-generated data file
├── .gitignore                                 # Standard Git ignore file
└── README.md                                  # This file
🎯 Learning Objectives
This project is an excellent practical exercise for understanding:

Using struct to define custom data types (e.g., User).

Managing collections of data using arrays.

Implementing persistent storage by reading from and writing to text files.

Building a menu-driven console interface.

Applying basic control structures (loops, conditionals) for program flow.

🤝 Contributing
As a beginner-friendly learning project, contributions that improve code clarity, add educational comments, or fix issues are welcome. Please feel free to fork the repository and submit pull requests.

📄 License
This project is provided for educational purposes.
