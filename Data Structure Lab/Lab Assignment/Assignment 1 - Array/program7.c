#include <stdio.h>

int main()
{
    int n, i, choice, search, found;
    int inserted = 0;

    // Menu-driven program
    do
    {
        printf("\n\n===== MENU =====\n");
        printf("1. Insert elements in the array\n");
        printf("2. Search an element using Linear Search\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                // Taking the size of the array
                printf("\nEnter the size of the array: ");
                scanf("%d", &n);

                int arr[n];

                // Taking array elements from the user
                printf("Enter the elements of the array:\n");

                for (i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }

                inserted = 1;

                printf("\nArray elements inserted successfully!\n");
                break;

            case 2:
                if (inserted == 0)
                {
                    printf("\nPlease insert the elements first.\n");
                }
                else
                {
                    printf("\nEnter the element to search: ");
                    scanf("%d", &search);

                    found = 0;

                    // Linear Search
                    for (i = 0; i < n; i++)
                    {
                        if (arr[i] == search)
                        {
                            printf("\nElement %d found at position %d.\n",
                                   search, i + 1);
                            found = 1;
                            break;
                        }
                    }

                    if (found == 0)
                    {
                        printf("\nElement %d not found in the array.\n",
                               search);
                    }
                }
                break;

            case 3:
                printf("\nProgram ended. Thank you!\n");
                break;

            default:
                printf("\nInvalid choice! Please enter a choice from 1 to 3.\n");
        }

    } while (choice != 3);

    return 0;
}
