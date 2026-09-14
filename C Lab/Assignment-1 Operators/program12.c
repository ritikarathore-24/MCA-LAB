// Program to check whether a person is eligible to vote based on age

#include <stdio.h>

int main()
{
    int age;

    printf("Enter the age of the person: ");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("Person is eligible to vote\n");
    }
    else
    {
        printf("Person is not eligible to vote\n");
    }

    return 0;
}