#include <stdio.h>

int main()
{
    int n, m;
    int i, j;
    int attendance[50][50];
    int total;

    // Taking number of students and days
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of days: ");
    scanf("%d", &m);

    // Taking attendance
    printf("\nEnter attendance (1 = Present, 0 = Absent):\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No. %d\n", i + 1);

        for (j = 0; j < m; j++)
        {
            printf("Day %d: ", j + 1);
            scanf("%d", &attendance[i][j]);
        }
    }

    // Displaying attendance
    printf("\n\n              ");

    for (j = 0; j < m; j++)
    {
        printf("Day %-4d", j + 1);
    }

    printf("Total Present\n");

    for (i = 0; i < n; i++)
    {
        total = 0;

        printf("Roll No. %-3d", i + 1);

        for (j = 0; j < m; j++)
        {
            printf("%-8d", attendance[i][j]);

            if (attendance[i][j] == 1)
            {
                total++;
            }
        }

        printf("%d\n", total);
    }

    return 0;
}