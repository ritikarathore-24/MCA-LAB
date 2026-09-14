// Program to check whether a person is eligible or not eligible to vote using ?:

#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("Eligible to vote") : printf("Not eligible to vote");

    return 0;
}