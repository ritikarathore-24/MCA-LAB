// Program to evaluate a postfix expression using stack

#include <stdio.h>
#include <ctype.h>

int stack[100];
int top = -1;

// Function to push an element into the stack
void push(int value)
{
    top++;
    stack[top] = value;
}

// Function to pop an element from the stack
int pop()
{
    int value = stack[top];
    top--;
    return value;
}

// Function to display the stack
void displayStack()
{
    int i;

    for(i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}

int main()
{
    char postfix[100];
    int i, a, b, result;

    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

    printf("\nSymbol\tOperation\t\tStack\n");

    // Read the postfix expression
    for(i = 0; postfix[i] != '\0'; i++)
    {
        // If the character is a digit, push it into the stack
        if(isdigit(postfix[i]))
        {
            push(postfix[i] - '0');

            printf("%c\tPush %c\t\t\t", postfix[i], postfix[i]);
            displayStack();
            printf("\n");
        }
        else
        {
            // Pop two operands from the stack
            b = pop();
            a = pop();

            // Perform the required operation
            switch(postfix[i])
            {
                case '+':
                    result = a + b;
                    break;

                case '-':
                    result = a - b;
                    break;

                case '*':
                    result = a * b;
                    break;

                case '/':
                    result = a / b;
                    break;

                case '%':
                    result = a % b;
                    break;
            }

            // Push the result back into the stack
            push(result);

            printf("%c\t%d %c %d = %d\t\t", postfix[i], a, postfix[i], b, result);
            displayStack();
            printf("\n");
        }
    }

    // The final element in the stack is the answer
    printf("\nResult = %d\n", pop());

    return 0;
}