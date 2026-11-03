
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j;
    float totalF = 0, totalFX = 0, totalFlogX = 0;
    float gm, hm;

    printf("Enter how many values you want to enter: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid number of values!");
        return 0;
    }

    float x[n], f[n], fx[n], logX[n], flogX[n];

    // Input X values
    printf("Enter X values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);

        if(x[i] <= 0)
        {
            printf("X values must be greater than zero!");
            return 0;
        }
    }

    // Input frequencies
    printf("Enter F values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &f[i]);

        if(f[i] < 0)
        {
            printf("Frequency cannot be negative!");
            return 0;
        }
    }

    // Calculate F/X, logX and FlogX
    for(i = 0; i < n; i++)
    {
        fx[i] = f[i] / x[i];

        logX[i] = log10(x[i]);

        flogX[i] = f[i] * logX[i];

        totalF += f[i];
        totalFX += fx[i];
        totalFlogX += flogX[i];
    }

    if(totalF == 0)
    {
        printf("\nTotal frequency cannot be zero!");
        return 0;
    }

    // Calculate Geometric Mean
    gm = pow(10, totalFlogX / totalF);

    // Calculate Harmonic Mean
    hm = totalF / totalFX;

    // Display Output Table

    printf("%10s %10s %12s %12s %12s\n",
           "X", "F", "F/X", "logX", "FlogX");

    printf("--------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%10.2f %10.2f %12.4f %12.4f %12.4f\n",
               x[i], f[i], fx[i], logX[i], flogX[i]);
    }

    printf("--------------------------------------------------------------\n");

    // Display totals below their respective columns
    printf("%10s %10s %12s %12s %12s\n",
           "", "", "", "", "");

    printf("%10s %10.2f %12.4f %12s %12.4f\n",
           "", totalF, totalFX, "", totalFlogX);

    // Display results
    printf("Geometric Mean using discrete series = %.2f\n", gm);
    printf("Harmonic Mean using discrete series = %.2f\n", hm);

    return 0;
}
