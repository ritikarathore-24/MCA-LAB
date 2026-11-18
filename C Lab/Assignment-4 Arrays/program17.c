
#include <stdio.h>

int main()
{
    int b, r, c, i, j, k, num, found = 0;

    printf("Enter blocks, rows and columns: ");
    scanf("%d%d%d", &b, &r, &c);

    int a[b][r][c];

    printf("Enter array elements:\n");
    for(i = 0; i < b; i++)
        for(j = 0; j < r; j++)
            for(k = 0; k < c; k++)
                scanf("%d", &a[i][j][k]);

    printf("Enter element to search: ");
    scanf("%d", &num);

    for(i = 0; i < b; i++)
        for(j = 0; j < r; j++)
            for(k = 0; k < c; k++)
            {
                if(a[i][j][k] == num)
                {
                    printf("Element found at:\n");
                    printf("Block = %d\n", i + 1);
                    printf("Row = %d\n", j + 1);
                    printf("Column = %d\n", k + 1);
                    found = 1;
                }
            }

    if(found == 0)
        printf("Element not found");

    return 0;
}
