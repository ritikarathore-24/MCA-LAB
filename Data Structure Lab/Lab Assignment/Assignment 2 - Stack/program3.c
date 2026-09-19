// Program to convert infix expression to postfix expression using stack

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char stack[100];
int top = -1;

// Function to push an operator into the stack
void push(char value)
{
    top++;
    stack[top] = value;
}

// Function to pop an operator from the stack
char pop()
{
    char value = stack[top];
    top--;
    return value;
}

// Function to return precedence of an operator
int precedence(char operator)
{
    if(operator == '^' || operator == '$')
        return 3;
    else if(operator == '*' || operator == '/' || operator == '%')
        return 2;
    else if(operator == '+' || operator == '-')
        return 1;
    else
        return 0;
}

// Function to display the operator stack
void displayStack()
{
    int i;

    for(i = 0; i <= top; i++)
    {
        printf("%c", stack[i]);
    }
}

int main()
{
    char infix[100], postfix[100];
    int i, j = 0;
    char symbol;

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    printf("\nSymbol\tPostfix String\tOperator Stack\n");
    
    // Read the infix expression
    for(i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];

        // If the symbol is an operand, add it to postfix
        if(isalnum(symbol))
        {
            postfix[j] = symbol;
            j++;
        }

        // If the symbol is an opening bracket, push it
        else if(symbol == '(')
        {
            push(symbol);
        }

        // If the symbol is a closing bracket
        else if(symbol == ')')
        {
            while(top != -1 && stack[top] != '(')
            {
                postfix[j] = pop();
                j++;
            }

            pop();
        }

        // If the symbol is an operator
        else
        {
            while(top != -1 && stack[top] != '(' &&
                  precedence(stack[top]) >= precedence(symbol))
            {
                postfix[j] = pop();
                j++;
            }

            push(symbol);
        }

        // Add null character to display current postfix string
        postfix[j] = '\0';

        printf("%c\t%-15s", symbol, postfix);

        printf("\t");
        displayStack();
        printf("\n");
    }

    // Pop remaining operators from the stack
    while(top != -1)
    {
        postfix[j] = pop();
        j++;
        postfix[j] = '\0';

        printf("-\t%-15s", postfix);
        printf("\t");
        displayStack();
        printf("\n");
    }

    printf("\nPostfix Expression = %s\n", postfix);

    return 0;
}