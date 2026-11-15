#include "../include/ContactList.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
ContactList contactList;
const string filename = "data/contacts.txt";

contactList.loadFromFile(filename);

int choice;

do {
    cout << "\n========== SMART CONTACT MANAGEMENT SYSTEM ==========\n";
    cout << "1. Add Contact\n";
    cout << "2. View All Contacts\n";
    cout << "3. Search Contact\n";
    cout << "4. Update Contact\n";
    cout << "5. Delete Contact\n";
    cout << "6. Sort Contacts\n";
    cout << "0. Exit Program\n";
    cout << "Enter your choice: ";

    if (!(cin >> choice)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Enter a number.\n";
        continue;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (choice == 1) {
        int id;
        string name, phone, email, city, notes;

        cout << "Enter Contact ID: ";
        if (!(cin >> id)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid ID!\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Phone: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);

        cout << "Enter City: ";
        getline(cin, city);

        cout << "Enter Notes: ";
        getline(cin, notes);

        Contact contact(id, name, phone, email, city, notes);
        contactList.addContact(contact);
        contactList.saveToFile(filename);
    }

    else if (choice == 2) {
        contactList.displayAllContacts();
    }

    else if (choice == 3) {
        int id;

        cout << "Enter Contact ID to Search: ";
        if (cin >> id) {
            contactList.searchContact(id);
        } else {
            cin.clear();
            cout << "Invalid ID!\n";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    else if (choice == 4) {
        int id;
        string name, phone, email, city, notes;

        cout << "Enter Contact ID to Update: ";
        if (!(cin >> id)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid ID!\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter New Name: ";
        getline(cin, name);

        cout << "Enter New Phone: ";
        getline(cin, phone);

        cout << "Enter New Email: ";
        getline(cin, email);

        cout << "Enter New City: ";
        getline(cin, city);

        cout << "Enter New Notes: ";
        getline(cin, notes);

        Contact updatedContact(id, name, phone, email, city, notes);

        if (contactList.updateContact(id, updatedContact)) {
            contactList.saveToFile(filename);
        }
    }

    else if (choice == 5) {
        int id;

        cout << "Enter Contact ID to Delete: ";
        if (cin >> id) {
            if (contactList.deleteContact(id)) {
                contactList.saveToFile(filename);
            }
        } else {
            cin.clear();
            cout << "Invalid ID!\n";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    else if (choice == 6) {
        contactList.sortContacts();
        contactList.saveToFile(filename);
    }

    else if (choice == 0) {
        contactList.saveToFile(filename);
        cout << "Thank you for using Smart Contact Management System!\n";
    }

    else {
        cout << "Invalid choice! Please try again.\n";
    }

} while (choice != 0);

return 0;

}