
#include <stdio.h>

int main()
{
    int b, r, c, i, j, k, largest;

    printf("Enter blocks, rows and columns: ");
    scanf("%d%d%d", &b, &r, &c);

    int a[b][r][c];

    printf("Enter array elements:\n");
    for(i = 0; i < b; i++)
        for(j = 0; j < r; j++)
            for(k = 0; k < c; k++)
                scanf("%d", &a[i][j][k]);

    largest = a[0][0][0];

    for(i = 0; i < b; i++)
        for(j = 0; j < r; j++)
            for(k = 0; k < c; k++)
                if(a[i][j][k] > largest)
                    largest = a[i][j][k];

    printf("Largest element = %d", largest);

    return 0;
}
