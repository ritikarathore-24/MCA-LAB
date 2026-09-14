// Program to check whether parentheses are balanced using stack

#include <stdio.h>

char stack[100];
int top = -1;

// Function to push a parenthesis into the stack
void push(char value)
{
    top++;
    stack[top] = value;
}

// Function to pop a parenthesis from the stack
char pop()
{
    char value = stack[top];
    top--;
    return value;
}

int main()
{
    char expression[100];
    int i, balanced = 1;

    printf("Enter an arithmetic expression: ");
    scanf("%s", expression);

    // Check each character of the expression
    for(i = 0; expression[i] != '\0'; i++)
    {
        if(expression[i] == '(')
        {
            push(expression[i]);
        }
        else if(expression[i] == ')')
        {
            if(top == -1)
            {
                balanced = 0;
                break;
            }
            else
            {
                pop();
            }
        }
    }

    // If stack is not empty, parentheses are not balanced
    if(top != -1)
    {
        balanced = 0;
    }

    if(balanced == 1)
    {
        printf("The expression has balanced parentheses.");
    }
    else
    {
        printf("The expression has unbalanced parentheses.");
    }

    return 0;
}