Smart Contact Management System

1. Project Overview

The Smart Contact Management System is a menu-driven C++ application developed to manage contact information efficiently.

It allows users to add, view, search, update, delete, and sort contacts. The project uses a Singly Linked List as its primary data structure and file handling to store contact information permanently.

2. Objectives

- To manage contact information efficiently.
- To implement Data Structures and Algorithms.
- To perform different operations on contacts.
- To store and retrieve contact records using file handling.
- To understand the practical implementation of a Singly Linked List.

3. Technologies Used

- Programming Language: C++
- Standard: C++17
- IDE: Visual Studio Code
- Compiler: GCC (g++)
- Data Structure: Singly Linked List
- File Handling: Text File

4. Features

1. Add Contact – Add a new contact with ID, name, phone, email, city, and notes.
2. View All Contacts – Display all stored contacts.
3. Search Contact – Search for a contact using its ID through Linear Search.
4. Update Contact – Update the details of an existing contact.
5. Delete Contact – Delete a contact using its ID.
6. Sort Contacts – Sort contacts alphabetically by name using Insertion Sort.
7. Exit Program – Exit the application safely.

5. Data Structure Used

Singly Linked List

A Singly Linked List is used to store contact records dynamically.

Each node contains:

- Contact data
- Pointer to the next node

The linked list makes it possible to insert, search, update, delete, and traverse contact records.

6. Algorithms Used

Linear Search

Used to find a contact by its ID.

Insertion Sort

Used to sort contacts alphabetically by name by rearranging linked-list nodes.

7. Project Folder Structure

SmartContactManagement/
│
├── src/
│   ├── main.cpp
│   ├── Contact.cpp
│   └── ContactList.cpp
│
├── include/
│   ├── Contact.h
│   └── ContactList.h
│
├── data/
│   └── contacts.txt
│
├── screenshots/
│
├── test_cases/
│
├── README.md
└── .gitignore

8. Compilation and Execution

Compile the Project

g++ -std=c++17 src/main.cpp src/Contact.cpp src/ContactList.cpp -o SmartContactManagement.exe

Run the Project

./SmartContactManagement.exe

For Windows PowerShell, use:

.\SmartContactManagement.exe

Run these commands from the main project folder.

9. File Handling

The project uses "data/contacts.txt" to store contact information.

- Contacts are loaded when the program starts.
- Updated contact records are saved to the file.
- Contact information remains available after restarting the program.

10. Contact Information Fields

Each contact contains:

- ID
- Name
- Phone
- Email
- City
- Notes

11. Conclusion

The Smart Contact Management System demonstrates the practical use of C++ programming, Singly Linked List, Linear Search, Insertion Sort, and File Handling.

This project helps in understanding how Data Structures and Algorithms can be used to develop a real-world contact management application.