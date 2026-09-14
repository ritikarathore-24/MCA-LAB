// Program to display the elements of the array in reverse order 

#include <stdio.h>
int main() 
{
    int arr[5];
    int i;

    printf("Enter 5 elements: ");
    for (i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements of the array are:\n");
    for (i=0; i<5; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}