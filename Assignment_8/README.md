# Assignment-08: Library Management System

## Objective

To develop a menu-driven Library Management System using structures in C. The program manages library books by allowing users to add, display, search, issue, and return books.

---

## Problem Statement

Develop a menu-driven application to manage library books. The program should perform the following operations:

- Add Book
- Display All Books
- Search Book by Book ID
- Issue Book
- Return Book

---

## Concepts Covered

- Structures
- Arrays
- Functions
- Loops
- Conditional Statements

---

## Algorithm

1. Start the program.
2. Display the main menu.
3. Read the user's choice.
4. Perform the selected operation:
   - Add a new book.
   - Display all books.
   - Search a book by Book ID.
   - Issue a book.
   - Return a book.
5. Repeat the menu until the user selects Exit.
6. Stop the program.

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Add Book | O(1) |
| Display Books | O(n) |
| Search Book | O(n) |
| Issue Book | O(n) |
| Return Book | O(n) |

---

## Space Complexity

**O(n)**

where **n** is the number of books stored.

---

## Sample Input

```
Enter Choice: 1

Enter Book ID: 101
Enter Book Title: C Programming
Enter Author Name: Dennis Ritchie
```

---

## Sample Output

```
Book Added Successfully.

Book Found

Title  : C Programming
Author : Dennis Ritchie
Status : Available
```

---

## Learning Outcome

- Learned to use structures for storing book information.
- Implemented searching using Book ID.
- Managed book issue and return status.
- Developed a menu-driven application using functions.
- Improved understanding of arrays of structures.

---

## Files Included

- `main.c`
- `README.md`
- `output.png`