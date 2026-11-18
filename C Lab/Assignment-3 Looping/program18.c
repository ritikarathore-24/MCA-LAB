#include <stdio.h>

int main()
{
    int choice, i;
    float marks[5], total = 0, percentage = 0;

    do
    {
        printf("\n\n1. Enter Marks");
        printf("\n2. Calculate Total");
        printf("\n3. Calculate Percentage");
        printf("\n4. Display Result");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                total = 0;

                printf("Enter marks of 5 subjects:\n");

                for(i = 0; i < 5; i++)
                {
                    scanf("%f", &marks[i]);
                }

                break;

            case 2:
                total = 0;

                for(i = 0; i < 5; i++)
                {
                    total = total + marks[i];
                }

                printf("Total Marks = %.2f", total);
                break;

            case 3:
                percentage = total / 5;

                printf("Percentage = %.2f%%", percentage);
                break;

            case 4:
                printf("Total Marks = %.2f", total);
                printf("\nPercentage = %.2f%%", percentage);

                if(percentage >= 40)
                    printf("\nResult: Pass");
                else
                    printf("\nResult: Fail");

                break;

            case 5:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 5);

    return 0;
}