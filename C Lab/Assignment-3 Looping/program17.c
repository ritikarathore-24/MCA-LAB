#include <stdio.h>

int main()
{
    int choice, n, i, fact, sum, rev, temp, rem;

    do
    {
        printf("\n1. Find Factorial");
        printf("\n2. Find Sum of Digits");
        printf("\n3. Reverse Number");
        printf("\n4. Check Palindrome");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);

                fact = 1;

                for(i = 1; i <= n; i++)
                    fact = fact * i;

                printf("Factorial = %d", fact);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);

                sum = 0;

                while(n != 0)
                {
                    sum = sum + n % 10;
                    n = n / 10;
                }

                printf("Sum of digits = %d", sum);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);

                rev = 0;

                while(n != 0)
                {
                    rem = n % 10;
                    rev = rev * 10 + rem;
                    n = n / 10;
                }

                printf("Reverse = %d", rev);
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);

                temp = n;
                rev = 0;

                while(n != 0)
                {
                    rem = n % 10;
                    rev = rev * 10 + rem;
                    n = n / 10;
                }

                if(temp == rev)
                    printf("Palindrome Number");
                else
                    printf("Not a Palindrome Number");

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