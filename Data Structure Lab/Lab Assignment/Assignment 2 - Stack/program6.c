// Program to check whether a string is a palindrome using stack

#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

// Function to push a character into the stack
void push(char value)
{
    top++;
    stack[top] = value;
}

// Function to pop a character from the stack
char pop()
{
    char value = stack[top];
    top--;
    return value;
}

int main()
{
    char str[100];
    int i, palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Push each character into the stack
    for(i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }

    // Compare original string with characters popped from stack
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] != pop())
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
    {
        printf("The string is a palindrome.");
    }
    else
    {
        printf("The string is not a palindrome.");
    }

    return 0;
}