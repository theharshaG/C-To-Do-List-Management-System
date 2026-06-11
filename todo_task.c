#include <stdio.h>
#include <string.h>

struct Task
{
    int id;
    char title[100];
};

int main()
{
    struct Task tasks[100];
    int count = 0;
    int choice;

    do
    {
        printf("\n===== TO-DO LIST =====\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                printf("Enter Task ID: ");
                scanf("%d", &tasks[count].id);

                printf("Enter Task Title: ");
                scanf("%s", tasks[count].title);

                count++;

                printf("Task Added Successfully!\n");
                break;
            }

            case 2:
            {
                if(count == 0)
                {
                    printf("No tasks available.\n");
                }
                else
                {
                    printf("\n----- TASKS -----\n");

                    for(int i = 0; i < count; i++)
                    {
                        printf("ID: %d\n", tasks[i].id);
                        printf("Task: %s\n", tasks[i].title);
                        printf("-----------------\n");
                    }
                }
                break;
            }

            case 3:
            {
                int deleteId;
                int found = 0;

                printf("Enter Task ID to delete: ");
                scanf("%d", &deleteId);

                for(int i = 0; i < count; i++)
                {
                    if(tasks[i].id == deleteId)
                    {
                        found = 1;

                        for(int j = i; j < count - 1; j++)
                        {
                            tasks[j] = tasks[j + 1];
                        }

                        count--;

                        printf("Task Deleted Successfully!\n");
                        break;
                    }
                }

                if(!found)
                {
                    printf("Task ID not found.\n");
                }

                break;
            }

            case 4:
                printf("Good Bye!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}