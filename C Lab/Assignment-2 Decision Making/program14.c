// Program to identify age category

#include <stdio.h>

int main()
{
    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    if (age>=0 && age<=12)
    {
        printf("Child");
    }

    else if (age>=13 && age<=19)
    {
        printf("Teenager");
    }

    else if (age>=20 && age<=59)
    {
        printf("Adult");
    }

    else if (age>=60)
    {
        printf("Senior Citizen");
    }

    else
    {
        printf("Invalid Age !!");
    }

    return 0;
}