#include <stdio.h>

struct book
{
    int id;
    char title[100];
    char author[100];
    int quantity;
};

int main()
{
    struct book b[100];
    int count = 0;
    int choice;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                printf("Enter Book ID: ");
                scanf("%d", &b[count].id);

                printf("Enter Book Name: ");
                scanf("%s", b[count].title);

                printf("Enter Author Name: ");
                scanf("%s", b[count].author);

                printf("Enter Quantity: ");
                scanf("%d", &b[count].quantity);

                count++;

                printf("Book Added Successfully!\n");
                break;
            }

            case 2:
            {
                if(count == 0)
                {
                    printf("No books available.\n");
                    break;
                }

                printf("\n========== BOOK LIST ==========\n");

                for(int i = 0; i < count; i++)
                {
                    printf("\nBook ID   : %d\n", b[i].id);
                    printf("Book Name : %s\n", b[i].title);
                    printf("Author    : %s\n", b[i].author);
                    printf("Quantity  : %d\n", b[i].quantity);
                    printf("------------------------------\n");
                }

                break;
            }

            case 3:
            {
                int search;
                int found = 0;

                printf("Enter Book ID to Search: ");
                scanf("%d", &search);

                for(int i = 0; i < count; i++)
                {
                    if(search == b[i].id)
                    {
                        found = 1;

                        printf("\n===== BOOK FOUND =====\n");
                        printf("Book ID   : %d\n", b[i].id);
                        printf("Book Name : %s\n", b[i].title);
                        printf("Author    : %s\n", b[i].author);
                        printf("Quantity  : %d\n", b[i].quantity);
                        printf("======================\n");

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }

                break;
            }

            case 4:
            {
                int issue;
                int found = 0;

                printf("Enter Book ID to Issue: ");
                scanf("%d", &issue);

                for(int i = 0; i < count; i++)
                {
                    if(issue == b[i].id)
                    {
                        found = 1;

                        if(b[i].quantity > 0)
                        {
                            b[i].quantity--;
                            printf("Book Issued Successfully.\n");
                        }
                        else
                        {
                            printf("Book Not Available.\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book ID not found.\n");
                }

                break;
            }

            case 5:
            {
                int ret;
                int found = 0;

                printf("Enter Book ID to Return: ");
                scanf("%d", &ret);

                for(int i = 0; i < count; i++)
                {
                    if(ret == b[i].id)
                    {
                        found = 1;
                        b[i].quantity++;

                        printf("Book Returned Successfully.\n");
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book ID not found.\n");
                }

                break;
            }

            case 6:
            {
                int del;
                int found = 0;
                char con;

                printf("Enter Book ID to Delete: ");
                scanf("%d", &del);

                for(int i = 0; i < count; i++)
                {
                    if(del == b[i].id)
                    {
                        found = 1;

                        printf("Confirm Delete (y/n): ");
                        scanf(" %c", &con);

                        if(con == 'y' || con == 'Y')
                        {
                            for(int j = i; j < count - 1; j++)
                            {
                                b[j] = b[j + 1];
                            }

                            count--;

                            printf("Book Deleted Successfully.\n");
                        }
                        else
                        {
                            printf("Deletion Cancelled.\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book ID not found.\n");
                }

                break;
            }

            case 7:
                printf("Thank You! Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}