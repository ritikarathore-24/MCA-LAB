// Program to check whether a character is a vowel or consonant using logical operators

#include <stdio.h>

int main()
{
    char c;

    printf("Enter the character to check: ");
    scanf(" %c", &c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c== 'A' || c== 'E' || c== 'I' || c== 'O' || c== 'U')
    {
        printf("Character is vowel");
    }
    else 
    {
        printf("Character is consonant");
    }

    return 0;
}