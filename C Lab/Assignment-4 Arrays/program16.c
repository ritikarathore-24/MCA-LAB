
#include <stdio.h>

int main()
{
    int b, r, c, i, j, k;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter blocks, rows and columns: ");
    scanf("%d%d%d", &b, &r, &c);

    int a[b][r][c];

    printf("Enter array elements:\n");
    for(i = 0; i < b; i++)
        for(j = 0; j < r; j++)
            for(k = 0; k < c; k++)
                scanf("%d", &a[i][j][k]);

    for(i = 0; i < b; i++)
        for(j = 0; j < r; j++)
            for(k = 0; k < c; k++)
            {
                if(a[i][j][k] > 0)
                    positive++;
                else if(a[i][j][k] < 0)
                    negative++;
                else
                    zero++;
            }

    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements = %d", zero);

    return 0;
}
