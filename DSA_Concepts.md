DSA Concepts – Smart Contact Management System

1. Introduction

The Smart Contact Management System uses Data Structures and Algorithms to manage contact records efficiently.

The main data structure used in this project is Singly Linked List.

2. Singly Linked List

A Singly Linked List is a linear data structure in which each node contains data and a pointer to the next node.

Each node stores:

- Contact information
- Pointer to the next node

The last node points to NULL.

Applications in Project

- Adding contacts
- Displaying contacts
- Searching contacts
- Updating contacts
- Deleting contacts
- Sorting contacts

3. Linear Search

Linear Search is used to find a contact by its ID.

Working

1. Start from the head node.
2. Compare the contact ID with the given ID.
3. If the ID matches, display the contact.
4. Otherwise, move to the next node.
5. If the end is reached, display Contact Not Found.

Complexity

- Best Case: O(1)
- Average Case: O(n)
- Worst Case: O(n)
- Auxiliary Space: O(1)

4. Insertion Sort

Insertion Sort is used to arrange contacts alphabetically according to their names.

In this project, nodes are rearranged directly without using an extra array or vector.

Working

1. Start with the first node.
2. Take the next node.
3. Compare its name with the names in the sorted part.
4. Insert the node at its correct position.
5. Repeat until all nodes are sorted.

Complexity

- Best Case: O(n)
- Average Case: O(n²)
- Worst Case: O(n²)
- Auxiliary Space: O(1)

5. Time and Space Complexity of Operations

Operation| Time Complexity| Auxiliary Space
Add Contact| O(n)| O(1)
Display Contacts| O(n)| O(1)
Search Contact| O(n)| O(1)
Update Contact| O(n)| O(1)
Delete Contact| O(n)| O(1)
Sort Contacts| O(n²)| O(1)
Save Contacts| O(n)| O(1)

Here, n represents the total number of contacts.

6. File Handling

File handling is used to save and retrieve contact information.

- "ifstream" is used to read contact records.
- "ofstream" is used to save contact records.
- Contact data is stored in "contacts.txt".
- Data is loaded when the program starts.

7. Conclusion

This project demonstrates the practical implementation of Singly Linked List, Linear Search, Insertion Sort, and File Handling using C++.

It helps in understanding how Data Structures and Algorithms are applied in a real-world application.