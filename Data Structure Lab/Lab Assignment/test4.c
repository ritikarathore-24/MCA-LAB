// Program to delete every even-valued node from a circular singly linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to insert a node
void insert(struct Node **head, int value)
{
    struct Node *newNode;
    struct Node *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory Overflow!\n");
        return;
    }

    newNode->data = value;

    if (*head == NULL)
    {
        *head = newNode;
        newNode->next = *head;
    }
    else
    {
        temp = *head;

        while (temp->next != *head)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = *head;
    }
}

// Function to delete all even-valued nodes
void deleteEven(struct Node **head)
{
    struct Node *current;
    struct Node *previous;
    struct Node *last;

    if (*head == NULL)
    {
        printf("List Underflow!\n");
        return;
    }

    // Delete even nodes from the beginning
    while ((*head)->data % 2 == 0)
    {
        // Only one node is present
        if ((*head)->next == *head)
        {
            free(*head);
            *head = NULL;
            return;
        }

        // Find the last node
        last = *head;

        while (last->next != *head)
        {
            last = last->next;
        }

        current = *head;
        *head = (*head)->next;
        last->next = *head;

        free(current);
    }

    // Delete even nodes from the remaining list
    previous = *head;
    current = (*head)->next;

    while (current != *head)
    {
        if (current->data % 2 == 0)
        {
            previous->next = current->next;
            free(current);
            current = previous->next;
        }
        else
        {
            previous = current;
            current = current->next;
        }
    }
}

// Function to display the circular linked list
void display(struct Node *head)
{
    struct Node *temp;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = head;

    do
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("\n");
}

int main()
{
    struct Node *head = NULL;
    int n, i, value;

    printf("Enter the number of nodes in the list: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("List is empty\n");
        return 0;
    }

    printf("Enter the values:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);
        insert(&head, value);
    }

    printf("Original circular linked list:\n");
    display(head);

    deleteEven(&head);

    printf("After deleting even-valued nodes:\n");
    display(head);

    return 0;
}