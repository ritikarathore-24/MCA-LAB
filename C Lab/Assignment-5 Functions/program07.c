#include <stdio.h>

void armstrong(int l, int u)
{
    int i, n, rem, sum, count, j, p;

    printf("Armstrong numbers are:\n");

    for(i = l; i <= u; i++)
    {
        n = i;
        count = 0;

        while(n > 0)
        {
            count++;
            n = n / 10;
        }

        n = i;
        sum = 0;

        while(n > 0)
        {
            rem = n % 10;
            p = 1;

            for(j = 1; j <= count; j++)
                p = p * rem;

            sum = sum + p;
            n = n / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }
}

int main()
{
    int l, u;

    printf("Enter lower limit: ");
    scanf("%d", &l);

    printf("Enter upper limit: ");
    scanf("%d", &u);

    armstrong(l, u);

    return 0;
}