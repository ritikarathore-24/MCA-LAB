
#include <stdio.h>

int main()
{
    int n, i, j, medianIndex, modeIndex = 0;
    float totalF = 0, totalX = 0, totalFX = 0;
    float mean, median, mode;
    float medianPosition, h, f0, f1, f2, prevCF;

    printf("Enter how many data you want to enter: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid number of data!");
        return 0;
    }

    float lower[n], upper[n], f[n], cf[n], x[n], fx[n];

    // Input Lower Limits
    printf("Enter Lower Limits: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &lower[i]);
    }

    // Input Upper Limits
    printf("Enter Upper Limits: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &upper[i]);

        if(upper[i] <= lower[i])
        {
            printf("Invalid class interval!");
            return 0;
        }
    }

    // Input Frequencies
    printf("Enter F values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &f[i]);

        if(f[i] < 0)
        {
            printf("Invalid frequency!");
            return 0;
        }
    }

    // Calculate X, FX, CF and totals
    for(i = 0; i < n; i++)
    {
        x[i] = (lower[i] + upper[i]) / 2;
        fx[i] = x[i] * f[i];

        if(i == 0)
            cf[i] = f[i];
        else
            cf[i] = cf[i - 1] + f[i];

        totalF += f[i];
        totalX += x[i];
        totalFX += fx[i];
    }

    if(totalF == 0)
    {
        printf("\nTotal frequency cannot be zero!");
        return 0;
    }

    // Calculate Mean
    mean = totalFX / totalF;

    // Calculate Median
    medianPosition = totalF / 2.0;

    for(i = 0; i < n; i++)
    {
        if(cf[i] >= medianPosition)
        {
            medianIndex = i;
            break;
        }
    }

    if(medianIndex == 0)
        prevCF = 0;
    else
        prevCF = cf[medianIndex - 1];

    h = upper[medianIndex] - lower[medianIndex];

    median = lower[medianIndex] +
             ((medianPosition - prevCF) / f[medianIndex]) * h;

    // Calculate Mode
    for(i = 1; i < n; i++)
    {
        if(f[i] > f[modeIndex])
            modeIndex = i;
    }

    f1 = f[modeIndex];

    if(modeIndex == 0)
        f0 = 0;
    else
        f0 = f[modeIndex - 1];

    if(modeIndex == n - 1)
        f2 = 0;
    else
        f2 = f[modeIndex + 1];

    h = upper[modeIndex] - lower[modeIndex];

    if((2 * f1 - f0 - f2) != 0)
    {
        mode = lower[modeIndex] +
               ((f1 - f0) / (2 * f1 - f0 - f2)) * h;
    }
    else
    {
        mode = x[modeIndex];
    }

    // Display Output Table

    printf("%-18s %12s %12s %12s %12s\n",
           "Interval", "F", "CF", "X", "FX");

    printf("--------------------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%7.2f - %-7.2f %12.2f %12.2f %12.2f %12.2f\n",
               lower[i], upper[i], f[i], cf[i], x[i], fx[i]);
    }

    printf("--------------------------------------------------------------------------\n");

    printf("%18s %12s %12s %12s %12s\n",
           "", "EF=", "", "EX=", "EFX=");

    printf("%18s %12.2f %12s %12.2f %12.2f\n",
           "", totalF, "", totalX, totalFX);

    // Display Results
    printf("Arithmetic mean using continuous series = %.2f\n", mean);
    printf("Median using continuous series = %.2f\n", median);
    printf("Mode using continuous series = %.2f\n", mode);

    return 0;
}
