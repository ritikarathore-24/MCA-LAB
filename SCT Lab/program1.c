
#include <stdio.h>

int main()
{
    int n, i, j, count, maxCount = 0;
    float sum = 0, mean, median, mode;

    printf("Enter how many value you want to enter: ");
    scanf("%d", &n);

    float x[n], temp, sorted[n];

    // Input numbers
    for(i = 0; i < n; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%f", &x[i]);

        sum += x[i];
        sorted[i] = x[i];
    }

    // Calculate Mean
    mean = sum / n;

    // Sort values for Median
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(sorted[i] > sorted[j])
            {
                temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    // Calculate Median
    if(n % 2 == 0)
    {
        median = (sorted[n/2 - 1] + sorted[n/2]) / 2;
    }
    else
    {
        median = sorted[n/2];
    }

    // Calculate Mode
    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(x[i] == x[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            mode = x[i];
        }
    }

    // Display entered values
    printf("\n\tX\n");

    for(i = 0; i < n; i++)
    {
        printf("\t%.2f\n", x[i]);
    }

    printf("\t-----\n");
    printf("\tEX=%.2f\n", sum);

    // Display results
    printf("Arithmetic mean using individual series is = %.2f\n", mean);
    printf("Median using individual series is = %.2f\n", median);
    printf("Mode using individual series is = %.2f\n", mode);

    return 0;
}
