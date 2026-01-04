#include <iostream>
#include <fstream> // for saved 
using namespace std;

// User structure - stores account information
struct User {
    string login;          // Username for login
    int pin = 0;           // 3-digit security code (100-999)
    double balance = 0.0;  // Current account balance
    bool isAdmin = false;  // Admin privileges flag (default: false)
};

// Function to simulate money deposit process
// Note: This is a simulation - in real app, connect to payment system
void DepositMoney() {
    cout << "How much money would you like to deposit into the account?: ";
    double quantity = 0.0;
    int numbercard = 0;
    int cvvcode = 0;

    cin >> quantity;

    // Basic validation for deposit amount
    if (quantity <= 0) {
        cout << "Error: Deposit amount must be positive!" << endl;
        return;
    }

    cout << "Enter your card number: ";
    cin >> numbercard;

    cout << "Enter your CVV code: ";
    cin >> cvvcode;

    // IMPORTANT: In this simulation, money doesn't actually go to user's balance
    // For real functionality, connect this to update user's balance
    cout << "Transaction successful! $" << quantity << " deposited." << endl;
    cout << "Note: In current version, manually update balance in main()" << endl;
}

void saveUsers(User users[], int count) { // create void for saving data
    ofstream file("users.txt");

    for (int i = 0; i < count; i++) {
        file << users[i].login << " " << users[i].pin << " " << users[i].balance << " " << users[i].isAdmin << endl;

    }
    file.close();
    cout << "Data saved to users.txt" << endl;
}

void loadUsers(User users[], int& count) {
    ifstream file("users.txt");

    if (file.is_open()) {
        cout << "No saved data found. Starting fresh." << endl;
        return;
    }
    count = 0;
    while (file >> users[count].login
        >> users[count].pin
        >> users[count].balance
        >> users[count].isAdmin) {
        count++;
        if (count >= 100) break;
    }
    file.close();
    cout << "Loaded " << count << " users" << endl;

}

int main() {

    // Database simulation - array of users
    const int maxUsers = 100;
    User accounts[maxUsers];
    int count = 0;

    loadUsers(accounts, count);

    // Temporary user object for registration
    User newAccount;
    newAccount.balance = 0.0;  // Start with zero balance

    //  ACCOUNT REGISTRATION 
    cout << "= Create your account =\n" << endl;
    cout << "Enter your login: ";
    cin >> newAccount.login;

    cout << "Enter your pincode (3 digits, 100-999): ";
    cin >> newAccount.pin;

    // Store original PIN for verification
    int originalPin = newAccount.pin;

    // Add new user to database
    accounts[count] = newAccount;
    count++;

    //  REGISTRATION CONFIRMATION 
    cout << "\n=== Account Created Successfully! ===" << endl;
    cout << "Login: " << accounts[0].login << endl;
    cout << "PIN: " << accounts[0].pin << endl;
    cout << "Balance: $" << accounts[0].balance << endl;
    cout << "Admin privileges: " << (accounts[0].isAdmin ? "Yes" : "No") << endl;
    cout << "Total users in system: " << count << endl;
    cout << "=====================================\n" << endl;

    //  FIRST-TIME DEPOSIT OFFER
    if (newAccount.balance == 0) {
        int choice;
        cout << "Your account balance is $0.00" << endl;
        cout << "Make initial deposit? 1 - Yes / 2 - No: ";
        cin >> choice;

        switch (choice) {
        case 1:  // User wants to deposit
            cout << "Enter your pincode for security verification: ";
            cin >> newAccount.pin;

            if (newAccount.pin == originalPin) {
                cout << "\n=== Secure Payment Gateway ===" << endl;
                DepositMoney();
                // TODO: Connect DepositMoney() to actually update balance
                // accounts[0].balance += depositedAmount;
                char choice;
                cout << "Save data before exit? (y/n): ";
                cin >> choice;

                if (choice == 'y' || choice == 'Y') {
                    saveUsers(accounts, count);

                    return 0;
                }
            }
            else {
                cout << "Security Error: Pincode is incorrect." << endl;
                cout << "Transaction cancelled. Please contact support." << endl;
            }
            break;

        case 2:  // User skips deposit
            cout << "No problem! You can deposit money anytime." << endl;
            char choice;
            cout << "Save data before exit? (y/n): ";
            cin >> choice;

            if (choice == 'y' || choice == 'Y') {
                saveUsers(accounts, count);
            }

            return 0;

            break;


        default:  // Invalid input
            cout << "Invalid selection. Operation cancelled." << endl;
            break;
        }
    }

    cout << "\n=== Application terminated ===" << endl;
    return 0;
}
