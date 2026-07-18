#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;
};

struct Book book[100];
int n = 0;

void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();

int main()
{
    int choice;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                printf("Program Exited.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &book[n].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book[n].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book[n].author);

    book[n].issued = 0;
    n++;

    printf("Book Added Successfully!\n");
}

void displayBooks()
{
    int i;

    if(n == 0)
    {
        printf("No Books Available.\n");
        return;
    }

    printf("\n----- Library Books -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", book[i].id);
        printf("Title   : %s\n", book[i].title);
        printf("Author  : %s\n", book[i].author);

        if(book[i].issued)
            printf("Status  : Issued\n");
        else
            printf("Status  : Available\n");
    }
}

void searchBook()
{
    int id, i, found = 0;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(book[i].id == id)
        {
            printf("\nBook Found\n");
            printf("Title  : %s\n", book[i].title);
            printf("Author : %s\n", book[i].author);

            if(book[i].issued)
                printf("Status : Issued\n");
            else
                printf("Status : Available\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found.\n");
}

void issueBook()
{
    int id, i;

    printf("Enter Book ID to Issue: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(book[i].id == id)
        {
            if(book[i].issued)
                printf("Book Already Issued.\n");
            else
            {
                book[i].issued = 1;
                printf("Book Issued Successfully.\n");
            }
            return;
        }
    }

    printf("Book Not Found.\n");
}

void returnBook()
{
    int id, i;

    printf("Enter Book ID to Return: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(book[i].id == id)
        {
            if(book[i].issued)
            {
                book[i].issued = 0;
                printf("Book Returned Successfully.\n");
            }
            else
            {
                printf("Book is Already Available.\n");
            }
            return;
        }
    }

    printf("Book Not Found.\n");
}