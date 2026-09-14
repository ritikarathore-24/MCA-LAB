// Program to print the elements of the array in the reverse order

#include <stdio.h>
int main ()
{
    int arr[8];
    int i;

    printf("Enter the elements: ");

    for (i=0; i<=7; i++) 
    {
    scanf("%d", &arr[i]);
    }

    printf("Elements of the array are: ");
    for (i=0; i<=7; i++)
    {
      printf("%d", arr[i]);
    }

    printf("\nElements of the array in the reverse order are: ");
    for (i=7; i>=0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}