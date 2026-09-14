// Program to check whether a number lies between 10 and 50

#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter the number to check: ");
    scanf("%d", &n);

    if(n>=10 && n<=50)
    {
        printf("This number lies between 10 and 50\n");
    }
    else{
        printf("This number doesn't lie between 10 and 50\n");
    }

    return 0;
}