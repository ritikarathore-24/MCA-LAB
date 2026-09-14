#include <stdio.h>

struct Book
{
    int book_id;
    char title[50];
    char author[50];
    float price;
};

int main()
{
    int n, i, search_id;
    int found = 0;
    int expensive;

    // Taking number of books
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    // Taking book details
    printf("\nEnter book details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].book_id);

        printf("Enter Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Enter Author: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter Price: ");
        scanf("%f", &b[i].price);
    }

    // Displaying all books
    printf("\nAll Books:\n\n");

    printf("Book ID\t\tTitle\t\tAuthor\t\tPrice\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%.2f\n",
               b[i].book_id, b[i].title, b[i].author, b[i].price);
    }

    // Taking Book ID to search
    printf("\nEnter Book ID to search: ");
    scanf("%d", &search_id);

    // Searching for the book
    for (i = 0; i < n; i++)
    {
        if (b[i].book_id == search_id)
        {
            printf("\nBook Found\n\n");

            printf("Book ID\t\tTitle\t\tAuthor\t\tPrice\n");
            printf("%d\t\t%s\t\t%s\t\t%.2f\n",
                   b[i].book_id, b[i].title, b[i].author, b[i].price);

            found = 1;
            break;
        }
    }

    // If book is not found
    if (found == 0)
    {
        printf("\nBook with ID %d not found.\n", search_id);
    }

    // Finding the most expensive book
    expensive = 0;

    for (i = 1; i < n; i++)
    {
        if (b[i].price > b[expensive].price)
        {
            expensive = i;
        }
    }

    // Displaying the most expensive book
    printf("\nMost Expensive Book:\n\n");

    printf("Book ID\t\tTitle\t\tAuthor\t\tPrice\n");
    printf("%d\t\t%s\t\t%s\t\t%.2f\n",
           b[expensive].book_id,
           b[expensive].title,
           b[expensive].author,
           b[expensive].price);

    return 0;
}