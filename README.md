# C Library Management System

## Overview

This repository contains a menu-driven Library Management System developed in C using structures, arrays, loops, conditional statements, and functions.

The system allows users to manage book records by performing operations such as adding books, viewing books, searching books, issuing books, returning books, and deleting books.

This project is useful for:

- Beginners learning C programming
- College laboratory projects
- Mini project demonstrations
- Data management practice
- Understanding structures and arrays
- Logic-building exercises

---

## Features

### Add Book

Allows the user to add a new book record including:

- Book ID
- Book Title
- Author Name
- Quantity

#### Example

```text
Enter Book ID: 101
Enter Book Name: CProgramming
Enter Author Name: Dennis
Enter Quantity: 5

Book Added Successfully!
```

---

### View Books

Displays all available books stored in the system.

#### Example

```text
========== BOOK LIST ==========

Book ID   : 101
Book Name : CProgramming
Author    : Dennis
Quantity  : 5

------------------------------
```

---

### Search Book

Searches a book using its Book ID.

#### Example

```text
Enter Book ID to Search: 101

===== BOOK FOUND =====

Book ID   : 101
Book Name : CProgramming
Author    : Dennis
Quantity  : 5
```

---

### Issue Book

Issues a book if copies are available.

The quantity decreases by one after issuing.

#### Example

```text
Enter Book ID to Issue: 101

Book Issued Successfully.
```

If quantity becomes zero:

```text
Book Not Available.
```

---

### Return Book

Returns a book and increases the quantity by one.

#### Example

```text
Enter Book ID to Return: 101

Book Returned Successfully.
```

---

### Delete Book

Deletes a book record using Book ID.

Includes confirmation before deletion.

#### Example

```text
Enter Book ID to Delete: 101
Confirm Delete (y/n): y

Book Deleted Successfully.
```

---

### Exit Program

Safely terminates the application.

#### Example

```text
Thank You! Exiting Program...
```

---

## Concepts Used

- Structures
- Arrays of Structures
- Menu Driven Programming
- Loops
- Conditional Statements
- Searching Techniques
- Record Deletion Logic
- Data Management
- User Interaction
- Basic Inventory Management

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
library-management-system/
│
├── library_management.c
└── README.md
```

---

## How to Compile

Compile:

```bash
gcc library_management.c -o library
```

Run:

```bash
./library
```

Windows:

```bash
library.exe
```

---

## Sample Menu

```text
===== LIBRARY MANAGEMENT SYSTEM =====

1. Add Book
2. View Books
3. Search Book
4. Issue Book
5. Return Book
6. Delete Book
7. Exit

Enter choice:
```

---

## Learning Outcomes

After completing this project, you will understand:

- Structure creation and usage
- Arrays of structures
- Record management techniques
- Searching records
- Deleting records from arrays
- Inventory management logic
- Menu-driven application development
- Real-world C project implementation

---

## Future Improvements

Possible future additions:

- File Handling Support
- Book Borrower Records
- Fine Calculation System
- Login Authentication
- Admin and User Roles
- Dynamic Memory Allocation
- Date and Time Tracking
- Persistent Database Storage
- Book Category Management

---

## Author

**Harsha G**

Learning:

- C Programming
- Data Structures
- Embedded Systems
- Python Development
- IoT Systems
- Problem Solving
- Software Development
