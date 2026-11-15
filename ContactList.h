#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include "Contact.h"
#include <string>

using namespace std;

class ContactList {
private:

    // Singly Linked List Node
    struct Node {
        Contact data;
        Node* next;

        Node(const Contact& contact) {
            data = contact;
            next = nullptr;
        }
    };

    Node* head;

    void clearList();

public:

    // Constructor and Destructor
    ContactList();
    ~ContactList();

    // Contact Operations
    void addContact(const Contact& contact);

    void displayAllContacts() const;

    void searchContact(int id) const;

    bool updateContact(int id, const Contact& updatedContact);

    bool deleteContact(int id);

    // Sorting
    void sortContacts();

    // File Handling
    void loadFromFile(const string& filename);

    void saveToFile(const string& filename) const;
};

#endif