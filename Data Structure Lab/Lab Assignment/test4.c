// Program to delete all even numbers from a circular singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n, i, value;
    struct node *head = NULL, *temp, *newnode;
    struct node *prev, *current;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter values: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &value);

        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;

        if(head == NULL)
        {
            head = newnode;
            newnode->next = head;
        }
        else
        {
            temp = head;

            while(temp->next != head)
            {
                temp = temp->next;
            }

            temp->next = newnode;
            newnode->next = head;
        }
    }

    // Delete even nodes

    while(head != NULL && head->data % 2 == 0)
    {
        if(head->next == head)
        {
            free(head);
            head = NULL;
        }
        else
        {
            temp = head;

            while(temp->next != head)
            {
                temp = temp->next;
            }

            current = head;
            head = head->next;
            temp->next = head;
            free(current);
        }
    }

    if(head != NULL)
    {
        prev = head;
        current = head->next;

        while(current != head)
        {
            if(current->data % 2 == 0)
            {
                prev->next = current->next;
                free(current);
                current = prev->next;
            }
            else
            {
                prev = current;
                current = current->next;
            }
        }
    }

    if(head == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        printf("\nList after deleting even numbers: ");

        temp = head;

        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        while(temp != head);
    }

    return 0;
}
