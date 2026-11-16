
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *newnode;

    newnode = malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    printf("\nNode created successfully!");
    printf("\nData = %d", newnode->data);

    free(newnode);

    return 0;
}
