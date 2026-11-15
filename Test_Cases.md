TEST CASES

Smart Contact Management System

1. Introduction

This document contains detailed test cases, sample inputs, and sample outputs for the Smart Contact Management System.

The purpose of testing is to verify that all the operations of the application work correctly. The project is developed using C++17 and uses a Singly Linked List as its primary data structure.

2. Testing Objectives

- To verify contact insertion and duplicate ID handling.
- To check contact display and searching operations.
- To verify updating and deleting contact records.
- To check alphabetical sorting using Insertion Sort.
- To verify file handling and data persistence.
- To check the correct termination of the application.

3. Detailed Test Cases

Test Case ID| Operation| Test Input| Expected Output
TC01| Add Contact| ID: 101, Name: Rahul, Phone: 9876543210, Email: rahul@gmail.com, City: Kanpur, Notes: Friend| Contact added successfully!
TC02| Duplicate ID| Enter ID: 101 again| Contact ID already exists!
TC03| View Contacts| Select option 2| All available contacts are displayed.
TC04| Search Contact| Search ID: 101| Contact Found!
TC05| Invalid Search| Search ID: 999| Contact not found!
TC06| Update Contact| Update ID: 101 with new details| Contact updated successfully!
TC07| Invalid Update| Update ID: 999| Contact not found!
TC08| Delete Contact| Delete ID: 101| Contact deleted successfully!
TC09| Invalid Delete| Delete ID: 999| Contact not found!
TC10| Sort Contacts| Select option 6 with multiple contacts| Contacts sorted by name successfully!
TC11| Empty List| Select option 2 when list is empty| No contacts available!
TC12| Save Contacts| Exit after adding contacts| Contacts saved successfully!
TC13| Load Contacts| Restart the application| Previously saved contacts are displayed.
TC14| Exit Program| Select option 0| Program exits successfully.

4. Sample Input

The following sample inputs demonstrate how a user interacts with the application.

Sample Input 1: Add Contact

Enter your choice: 1

Enter Contact ID: 101
Enter Name: Rahul
Enter Phone: 9876543210
Enter Email: rahul@gmail.com
Enter City: Kanpur
Enter Notes: Friend

Sample Input 2: Search Contact

Enter your choice: 3

Enter Contact ID to search: 101

Sample Input 3: Update Contact

Enter your choice: 4

Enter Contact ID to update: 101
Enter New Name: Rahul Sharma
Enter New Phone: 9876501234
Enter New Email: rahulsharma@gmail.com
Enter New City: Lucknow
Enter New Notes: College Friend

Sample Input 4: Delete Contact

Enter your choice: 5

Enter Contact ID to delete: 101

Sample Input 5: Sort Contacts

Enter your choice: 6

5. Sample Output

Output 1: Add Contact

Contact added successfully!
Contacts saved successfully!

Output 2: View All Contacts

===== All Contacts =====

ID: 101
Name: Rahul
Phone: 9876543210
Email: rahul@gmail.com
City: Kanpur
Notes: Friend
-------------------------

Output 3: Search Contact

Contact Found!

ID: 101
Name: Rahul
Phone: 9876543210
Email: rahul@gmail.com
City: Kanpur
Notes: Friend

Output 4: Update Contact

Contact updated successfully!
Contacts saved successfully!

Output 5: Delete Contact

Contact deleted successfully!
Contacts saved successfully!

Output 6: Sort Contacts

Contacts sorted by name successfully!

===== Sorted Contacts =====

Output 7: Exit Program

Contacts saved successfully!

6. Test Result Summary

Status| Description
Pass| Actual output matches expected output.
Fail| Actual output does not match expected output.
Not Tested| Test case has not been executed.

7. Conclusion

The test cases and sample inputs/outputs demonstrate the working of the Smart Contact Management System.

The application implements contact management using Singly Linked List, Linear Search, Insertion Sort, and File Handling.

Testing verifies the major operations and helps ensure the correctness and reliability of the application.