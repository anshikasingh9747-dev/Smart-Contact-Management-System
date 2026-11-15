#include <iostream>
#include <fstream>
#include <limits>
#include "../include/ContactList.h"

using namespace std;

// Constructor
ContactList::ContactList() {
    head = nullptr;
}

// Destructor
ContactList::~ContactList() {
    clearList();
}

// Clear Linked List
void ContactList::clearList() {

    Node* current = head;

    while (current != nullptr) {

        Node* temp = current;
        current = current->next;

        delete temp;
    }

    head = nullptr;
}

// Add Contact
void ContactList::addContact(const Contact& contact) {

    Node* current = head;

    // Check Duplicate ID
    while (current != nullptr) {

        if (current->data.getId() == contact.getId()) {
            cout << "Contact ID already exists!" << endl;
            return;
        }

        current = current->next;
    }

    Node* newNode = new Node(contact);

    if (head == nullptr) {
        head = newNode;
    }
    else {

        current = head;

        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    cout << "Contact added successfully!" << endl;
}

// Display All Contacts
void ContactList::displayAllContacts() const {

    if (head == nullptr) {
        cout << "No contacts available!" << endl;
        return;
    }

    cout << "\n===== All Contacts =====\n";

    Node* current = head;

    while (current != nullptr) {

        current->data.display();

        cout << "-------------------------\n";

        current = current->next;
    }
}

// Search Contact - Linear Search
void ContactList::searchContact(int id) const {

    Node* current = head;

    while (current != nullptr) {

        if (current->data.getId() == id) {

            cout << "\nContact Found!\n";

            current->data.display();

            return;
        }

        current = current->next;
    }

    cout << "Contact not found!" << endl;
}

// Update Contact
bool ContactList::updateContact(
    int id, const Contact& updatedContact) {

    Node* current = head;

    while (current != nullptr) {

        if (current->data.getId() == id) {

            current->data = updatedContact;

            cout << "Contact updated successfully!" << endl;

            return true;
        }

        current = current->next;
    }

    cout << "Contact not found!" << endl;

    return false;
}

// Delete Contact
bool ContactList::deleteContact(int id) {

    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr) {

        if (current->data.getId() == id) {

            if (previous == nullptr) {
                head = current->next;
            }
            else {
                previous->next = current->next;
            }

            delete current;

            cout << "Contact deleted successfully!" << endl;

            return true;
        }

        previous = current;
        current = current->next;
    }

    cout << "Contact not found!" << endl;

    return false;
}

// Sort Contacts - Insertion Sort
void ContactList::sortContacts() {

    if (head == nullptr || head->next == nullptr) {

        cout << "Not enough contacts to sort!" << endl;

        return;
    }

    Node* sorted = nullptr;
    Node* current = head;

    while (current != nullptr) {

        Node* nextNode = current->next;

        if (sorted == nullptr ||
            sorted->data.getName() >= current->data.getName()) {

            current->next = sorted;
            sorted = current;
        }
        else {

            Node* temp = sorted;

            while (temp->next != nullptr &&
                   temp->next->data.getName() <
                   current->data.getName()) {

                temp = temp->next;
            }

            current->next = temp->next;
            temp->next = current;
        }

        current = nextNode;
    }

    head = sorted;

    cout << "\nContacts sorted by name successfully!\n";

    cout << "\n===== Sorted Contacts =====\n";

    displayAllContacts();
}

// Load Contacts From File
void ContactList::loadFromFile(const string& filename) {

    ifstream file(filename);

    if (!file.is_open()) {
        return;
    }

    clearList();

    int id;
    string name, phone, email, city, notes;

    while (file >> id) {

        file.ignore(numeric_limits<streamsize>::max(), '\n');

        if (!getline(file, name) ||
            !getline(file, phone) ||
            !getline(file, email) ||
            !getline(file, city) ||
            !getline(file, notes)) {

            break;
        }

        Contact contact(id, name, phone, email, city, notes);

        // Check Duplicate ID
        Node* current = head;
        bool duplicate = false;

        while (current != nullptr) {

            if (current->data.getId() == id) {
                duplicate = true;
                break;
            }

            current = current->next;
        }

        if (!duplicate) {

            Node* newNode = new Node(contact);

            if (head == nullptr) {
                head = newNode;
            }
            else {

                current = head;

                while (current->next != nullptr) {
                    current = current->next;
                }

                current->next = newNode;
            }
        }
    }

    file.close();
}

// Save Contacts To File
void ContactList::saveToFile(const string& filename) const {

    ofstream file(filename);

    if (!file.is_open()) {

        cout << "Unable to save contacts!" << endl;

        return;
    }

    Node* current = head;

    while (current != nullptr) {

        file << current->data.getId() << '\n';
        file << current->data.getName() << '\n';
        file << current->data.getPhone() << '\n';
        file << current->data.getEmail() << '\n';
        file << current->data.getCity() << '\n';
        file << current->data.getNotes() << '\n';

        current = current->next;
    }

    file.close();

    cout << "Contacts saved successfully!" << endl;
}