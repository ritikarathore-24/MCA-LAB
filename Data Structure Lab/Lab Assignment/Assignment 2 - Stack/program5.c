// Program to reverse a string using stack

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
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Push each character of the string into the stack
    for(i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }

    // Pop characters to get the string in reverse order
    printf("Reversed string: ");

    while(top != -1)
    {
        printf("%c", pop());
    }

    return 0;
}