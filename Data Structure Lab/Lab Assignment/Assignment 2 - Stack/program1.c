#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// PUSH OPERATION
void push()
{
    int value;

    if (top == MAX - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }

    printf("Enter element to push: ");
    scanf("%d", &value);

    top++;
    stack[top] = value;

    printf("%d pushed into the stack\n", value);
}

// POP OPERATION
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return;
    }

    printf("Popped element: %d\n", stack[top]);
    top--;
}

// PEEK OPERATION
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}

// DISPLAY OPERATION
void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack elements are:\n");

    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

// COUNT OPERATION
void count()
{
    printf("Number of elements in stack: %d\n", top + 1);
}

// MAIN FUNCTION
int main()
{
    int choice;

    do
    {
        printf("\n===== STACK MENU =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Count\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                count();
                break;

            case 6:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice! Please enter choice from 1 to 6\n");
        }

    } while (choice != 6);

    return 0;
}