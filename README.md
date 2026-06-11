# C To-Do List Management System

## Overview

This repository contains a simple menu-driven To-Do List Management System developed in C using structures, arrays, loops, and conditional statements.

The system allows users to manage daily tasks by adding new tasks, viewing all tasks, and deleting completed tasks.

This project is useful for:

- Beginners learning C programming
- College laboratory exercises
- Mini project demonstrations
- Understanding structures and arrays
- Logic-building practice
- Task management applications

---

## Features

### Add Task

Allows the user to add a new task with:

- Task ID
- Task Title

#### Example

```text
Enter Task ID: 101
Enter Task Title: Assignment

Task Added Successfully!
```

---

### View Tasks

Displays all available tasks stored in the system.

#### Example

```text
----- TASKS -----

ID: 101
Task: Assignment

-----------------

ID: 102
Task: Project

-----------------
```

---

### Delete Task

Deletes a task using its Task ID.

After deletion, remaining tasks are shifted automatically.

#### Example

```text
Enter Task ID to delete: 101

Task Deleted Successfully!
```

If Task ID does not exist:

```text
Task ID not found.
```

---

### Exit Program

Safely exits the application.

#### Example

```text
Good Bye!
```

---

## Concepts Used

- Structures
- Arrays of Structures
- Menu Driven Programming
- Loops
- Conditional Statements
- Searching Records
- Record Deletion Logic
- Array Shifting
- User Input Handling

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
todo-list-management-system/
│
├── todo_list.c
└── README.md
```

---

## How to Compile

Compile:

```bash
gcc todo_list.c -o todo
```

Run:

```bash
./todo
```

Windows:

```bash
todo.exe
```

---

## Sample Menu

```text
===== TO-DO LIST =====

1. Add Task
2. View Tasks
3. Delete Task
4. Exit

Enter choice:
```

---

## Learning Outcomes

After completing this project, you will understand:

- Structure creation and usage
- Arrays of structures
- Menu-driven programming
- Record management techniques
- Searching operations
- Deleting records from arrays
- Data organization concepts
- Basic project development in C

---

## Future Improvements

Possible future additions:

- Task Status (Pending/Completed)
- Task Priority Levels
- Due Date Management
- File Handling Support
- Task Editing Feature
- Search Task Feature
- Dynamic Memory Allocation
- User Authentication
- Persistent Data Storage

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