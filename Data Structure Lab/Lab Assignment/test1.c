#include <stdio.h>
#define MAX 100

int main()
{
    int arr[MAX] ,stack[MAX]; 
    int n, i, top=-1;

    printf("Enter the value of n: ");   
    scanf("%d", &n);

    printf("Enter the numbers in the array: ");

    for(i = 0; i < n; i++)         // Inserting Elements in the array
    {
        scanf("%d", &arr[i]);
    }

    printf("Total integers in the array: %d\n", n);

    for (i=0; i<n; i++)
    {
        if (arr[i]%3==0 || arr[i]%5==0)
        {
            printf("%d Divisible by both 3 and 5\n", arr[i]);

            if(top==MAX-1)
            {
                printf("Stack Overflow\n");
                break;
            }

            top++;
            stack[top] = arr[i];
        }
        else
        {
            printf("%d Not divisible by both 3 and 5\n", arr[i]);
        }
    }

    printf("Stack Output:  ");

    if (top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        while(top>=0)
        {
            printf("%d ", stack[top]);
            top--;
        }
        printf("\n");
    }

    printf("\nOriginal Array:  ");

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}