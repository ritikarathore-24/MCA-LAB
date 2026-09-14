//Program to calculate mean, median and mode in an individual series

#include <stdio.h>
int main ()
{
    int n, i, j;
    double temp;
    double sum = 0;
    int count, maxCount=0;
    double mean, median, mode;

    printf("Enter the number of observations:");
    scanf("%d", &n);

    double a[n];

    printf("Enter the observations:\n");

    for (i=0; i<n; i++)
    {
        scanf("%lf", &a[i]);
    }

    // Calculate Mean

    for (i=0; i<n; i++)
    {
        sum = sum+a[i];
    }

    mean = sum/n;

    printf("Mean of the individual series: %.2lf\n", mean);

    // Arrange the elements in the ascending order

    for(i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // Calculate Median
    if(n%2!=0)
    {
        median = a[n/2];
    }
    else
    {
        median = (a[n/2-1] + a[n/2]) / 2.0;
    }

    printf("Median of the individual series: %.2lf\n", median);

    // Calculate Mode

    for (i=0; i<n; i++)
    {
        count = 1;
        while (i+1<n && a[i] == a[i+1])
        {
            count++;
            i++;
        }
        if (count>maxCount)
        {
            maxCount = count;
            mode = a[i];
        }
    }
    if (maxCount == 1)
    {
        printf("Mode of the individual series: No mode\n");
    }
    else 
    {
        printf("Mode of individual series: %.2lf\n", mode);
    }

    return 0;
}