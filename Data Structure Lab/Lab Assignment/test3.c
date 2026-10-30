// Program to rotate a circular queue to the left by K positions

#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;
int count = 0;

// Function to insert an element
void enqueue(int value)
{
    if (count == MAX)
    {
        printf("Queue Overflow!\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = value;
    count++;
}

// Function to delete an element
int dequeue()
{
    int value;

    if (count == 0)
    {
        printf("Queue Underflow!\n");
        return -1;
    }

    value = queue[front];

    if (count == 1)
    {
        front = -1;
        rear = -1;
        count = 0;
    }
    else
    {
        front = (front + 1) % MAX;
        count--;
    }

    return value;
}

// Function to display the queue
void display()
{
    int i, index;

    if (count == 0)
    {
        printf("Queue is empty.\n");
        return;
    }

    index = front;

    for (i = 0; i < count; i++)
    {
        printf("%d\t", queue[index]);
        index = (index + 1) % MAX;
    }

    printf("\n");
}

int main()
{
    int n, i, value, k;

    printf("Enter the number of elements in Queue: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Queue is empty.\n");
        return 0;
    }

    if (n > MAX)
    {
        printf("Queue Overflow! Maximum size is %d.\n", MAX);
        return 0;
    }

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);
        enqueue(value);
    }

    printf("Enter the value of K: ");
    scanf("%d", &k);

    if (k < 0)
    {
        printf("Invalid value of K.\n");
        return 0;
    }

    if (count == 1)
    {
        printf("Queue has only one element, so rotation is not required.\n");
    }
    else
    {
        k = k % count;

        for (i = 0; i < k; i++)
        {
            value = dequeue();

            if (value != -1)
            {
                enqueue(value);
            }
        }
    }

    printf("Queue after left rotation:\n");
    display();

    return 0;
}

