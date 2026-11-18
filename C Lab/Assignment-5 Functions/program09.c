#include <stdio.h>

void palindrome(int l, int u)
{
    int i, n, rem, rev;

    printf("Palindrome numbers are:\n");

    for(i = l; i <= u; i++)
    {
        n = i;
        rev = 0;

        while(n > 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }

        if(rev == i)
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

    palindrome(l, u);

    return 0;
}