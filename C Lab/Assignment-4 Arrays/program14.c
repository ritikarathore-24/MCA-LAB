
#include <stdio.h>

int main()
{
    int b, r, c, i, j, k, sum = 0;

    printf("Enter blocks, rows and columns: ");
    scanf("%d%d%d", &b, &r, &c);

    int a[b][r][c];

    printf("Enter array elements:\n");
    for(i = 0; i < b; i++)
        for(j = 0; j < r; j++)
            for(k = 0; k < c; k++)
            {
                scanf("%d", &a[i][j][k]);
                sum = sum + a[i][j][k];
            }

    printf("Sum of all elements = %d", sum);

    return 0;
}
