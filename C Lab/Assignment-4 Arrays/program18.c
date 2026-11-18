
#include <stdio.h>

int main()
{
    int b, r, c, i, j, k;

    printf("Enter blocks, rows and columns: ");
    scanf("%d%d%d", &b, &r, &c);

    int a[b][r][c];

    printf("Enter array elements:\n");
    for(i = 0; i < b; i++)
        for(j = 0; j < r; j++)
            for(k = 0; k < c; k++)
                scanf("%d", &a[i][j][k]);

    printf("Reverse display of 3D array:\n");

    for(i = b - 1; i >= 0; i--)
    {
        printf("Block %d:\n", i + 1);

        for(j = r - 1; j >= 0; j--)
        {
            for(k = c - 1; k >= 0; k--)
                printf("%d ", a[i][j][k]);

            printf("\n");
        }
    }

    return 0;
}
