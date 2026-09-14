#include <stdio.h>

int main()
{
    int m, n, i, j, choice;
    int inserted = 0;
    int sum, smallest, largest;
    float average;

    // Menu-driven program
    do
    {
        printf("\n\n===== MENU =====\n");
        printf("1. Insert elements in the array\n");
        printf("2. Display sum of all elements\n");
        printf("3. Display average of all elements\n");
        printf("4. Find and display smallest element\n");
        printf("5. Find and display largest element\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                // Taking the size of the 2D array
                printf("\nEnter number of rows (m): ");
                scanf("%d", &m);

                printf("Enter number of columns (n): ");
                scanf("%d", &n);

                int arr[m][n];

                // Taking elements from the user
                printf("\nEnter the elements of the array:\n");

                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        scanf("%d", &arr[i][j]);
                    }
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
                    sum = 0;

                    // Calculating sum
                    for (i = 0; i < m; i++)
                    {
                        for (j = 0; j < n; j++)
                        {
                            sum = sum + arr[i][j];
                        }
                    }

                    printf("\nSum of all elements = %d\n", sum);
                }
                break;

            case 3:
                if (inserted == 0)
                {
                    printf("\nPlease insert the elements first.\n");
                }
                else
                {
                    sum = 0;

                    // Calculating sum
                    for (i = 0; i < m; i++)
                    {
                        for (j = 0; j < n; j++)
                        {
                            sum = sum + arr[i][j];
                        }
                    }

                    // Calculating average
                    average = (float)sum / (m * n);

                    printf("\nAverage of all elements = %.2f\n", average);
                }
                break;

            case 4:
                if (inserted == 0)
                {
                    printf("\nPlease insert the elements first.\n");
                }
                else
                {
                    // Assume first element is smallest
                    smallest = arr[0][0];

                    // Finding smallest element
                    for (i = 0; i < m; i++)
                    {
                        for (j = 0; j < n; j++)
                        {
                            if (arr[i][j] < smallest)
                            {
                                smallest = arr[i][j];
                            }
                        }
                    }

                    printf("\nSmallest element = %d\n", smallest);
                }
                break;

            case 5:
                if (inserted == 0)
                {
                    printf("\nPlease insert the elements first.\n");
                }
                else
                {
                    // Assume first element is largest
                    largest = arr[0][0];

                    // Finding largest element
                    for (i = 0; i < m; i++)
                    {
                        for (j = 0; j < n; j++)
                        {
                            if (arr[i][j] > largest)
                            {
                                largest = arr[i][j];
                            }
                        }
                    }

                    printf("\nLargest element = %d\n", largest);
                }
                break;

            case 6:
                printf("\nProgram ended. Thank you!\n");
                break;

            default:
                printf("\nInvalid choice! Please enter a choice from 1 to 6.\n");
        }

    } while (choice != 6);

    return 0;
}