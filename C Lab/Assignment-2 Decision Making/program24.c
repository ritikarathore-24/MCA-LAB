// Program for calculator with nested switch

#include <stdio.h>

int main()
{
    int choice, operation;
    float a, b;

    printf("1. Arithmetic\n");
    printf("2. Relational\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice)
    {
        case 1:
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("Enter your choice: ");
            scanf("%d", &operation);

            switch(operation)
            {
                case 1:
                    printf("Result = %.2f", a + b);
                    break;

                case 2:
                    printf("Result = %.2f", a - b);
                    break;

                case 3:
                    printf("Result = %.2f", a * b);
                    break;

                case 4:
                    if(b != 0)
                        printf("Result = %.2f", a / b);
                    else
                        printf("Division by zero is not possible");
                    break;

                default:
                    printf("Invalid choice");
            }
            break;

        case 2:
            printf("1. Greater\n");
            printf("2. Smaller\n");
            printf("Enter your choice: ");
            scanf("%d", &operation);

            switch(operation)
            {
                case 1:
                    if(a > b)
                        printf("%.2f is greater", a);
                    else if(b > a)
                        printf("%.2f is greater", b);
                    else
                        printf("Both numbers are equal");
                    break;

                case 2:
                    if(a < b)
                        printf("%.2f is smaller", a);
                    else if(b < a)
                        printf("%.2f is smaller", b);
                    else
                        printf("Both numbers are equal");
                    break;

                default:
                    printf("Invalid choice");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}