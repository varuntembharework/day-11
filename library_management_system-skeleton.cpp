#include <iostream>
#include <string>
#include <vector>
using namespace std;

// =============================
// Data Structures
// =============================
struct Book {
    int id;
    string title;
    string author;
    int quantity;
};

struct User {
    int id;
    string name;
    string role; // "student" or "faculty"
};

struct Transaction {
    int bookId;
    int userId;
    string issueDate;
    string returnDate;
    bool isReturned;
};

// =============================
// Function Declarations
// =============================

// Book Management
void addBook();
void viewBooks();
void searchBook();
void deleteBook();

// User Management
void addUser();
void viewUsers();
void searchUser();

// Transactions
void issueBook();
void returnBook();
void viewTransactions();

// Menu Functions
void adminMenu();
void userMenu();
void mainMenu();

// =============================
// Main Function
// =============================
int main() {
    mainMenu();
    return 0;
}

// =============================
// Function Definitions (Skeleton)
// =============================

// ---- Book Management ----
void addBook() {
    cout << "\n[Add Book] Feature coming soon...\n";
}

void viewBooks() {
    cout << "\n[View Books] Feature coming soon...\n";
}

void searchBook() {
    cout << "\n[Search Book] Feature coming soon...\n";
}

void deleteBook() {
    cout << "\n[Delete Book] Feature coming soon...\n";
}

// ---- User Management ----
void addUser() {
    cout << "\n[Add User] Feature coming soon...\n";
}

void viewUsers() {
    cout << "\n[View Users] Feature coming soon...\n";
}

void searchUser() {
    cout << "\n[Search User] Feature coming soon...\n";
}

// ---- Transactions ----
void issueBook() {
    cout << "\n[Issue Book] Feature coming soon...\n";
}

void returnBook() {
    cout << "\n[Return Book] Feature coming soon...\n";
}

void viewTransactions() {
    cout << "\n[View Transactions] Feature coming soon...\n";
}

// =============================
// Menus
// =============================
void adminMenu() {
    int choice;
    do {
        cout << "\n========== Admin Menu ==========\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Add User\n";
        cout << "6. View Users\n";
        cout << "7. Search User\n";
        cout << "8. View Transactions\n";
        cout << "0. Back to Main Menu\n";
        cout << "================================\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: addUser(); break;
            case 6: viewUsers(); break;
            case 7: searchUser(); break;
            case 8: viewTransactions(); break;
            case 0: cout << "Returning to Main Menu...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);
}

void userMenu() {
    int choice;
    do {
        cout << "\n========== User Menu ==========\n";
        cout << "1. View Books\n";
        cout << "2. Search Book\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "0. Back to Main Menu\n";
        cout << "================================\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: viewBooks(); break;
            case 2: searchBook(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 0: cout << "Returning to Main Menu...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);
}

void mainMenu() {
    int choice;
    do {
        cout << "\n========== Library Management System ==========\n";
        cout << "1. Admin Login\n";
        cout << "2. User Menu\n";
        cout << "0. Exit\n";
        cout << "===============================================\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: adminMenu(); break;
            case 2: userMenu(); break;
            case 0: cout << "Exiting Program. Goodbye!\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);
}