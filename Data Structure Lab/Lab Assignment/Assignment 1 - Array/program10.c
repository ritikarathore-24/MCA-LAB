#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    int n, i, search_roll;
    int found = 0;

    // Taking number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Taking student details
    printf("\nEnter student details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No.: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Taking roll number to search
    printf("\nEnter Roll No. to search: ");
    scanf("%d", &search_roll);

    // Searching student record
    for (i = 0; i < n; i++)
    {
        if (s[i].roll_no == search_roll)
        {
            printf("\nStudent Record Found\n\n");

            printf("Roll No.\tName\t\tMarks\n");
            printf("%d\t\t%s\t\t%.2f\n",
                   s[i].roll_no, s[i].name, s[i].marks);

            found = 1;
            break;
        }
    }

    // If student is not found
    if (found == 0)
    {
        printf("\nStudent with Roll No. %d not found.\n", search_roll);
    }

    return 0;
}