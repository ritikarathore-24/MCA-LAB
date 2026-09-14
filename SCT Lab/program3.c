#include <stdio.h>

int main()
{
    int n, i, j;

    float totalFrequency = 0;
    float sumFX = 0;
    float mean, median, mode;

    // Taking number of classes
    printf("Enter the number of classes: ");
    scanf("%d", &n);

    float lower[n];
    float upper[n];
    float f[n];
    float x[n];
    float fx[n];
    float cf[n];

    // Taking class intervals
    printf("\nEnter the class intervals:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nClass %d\n", i + 1);

        printf("Lower limit = ");
        scanf("%f", &lower[i]);

        printf("Upper limit = ");
        scanf("%f", &upper[i]);
    }

    // Taking frequencies
    printf("\nEnter the frequencies:\n");

    for (i = 0; i < n; i++)
    {
        printf("F[%d] = ", i + 1);
        scanf("%f", &f[i]);
    }

    // Sorting class intervals in ascending order
    // Frequencies are also exchanged accordingly
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (lower[i] > lower[j])
            {
                float temp;

                temp = lower[i];
                lower[i] = lower[j];
                lower[j] = temp;

                temp = upper[i];
                upper[i] = upper[j];
                upper[j] = temp;

                temp = f[i];
                f[i] = f[j];
                f[j] = temp;
            }
        }
    }

    // Calculate midpoint, FX, CF, total frequency and sum of FX
    for (i = 0; i < n; i++)
    {
        // Midpoint
        x[i] = (lower[i] + upper[i]) / 2.0;

        // FX
        fx[i] = x[i] * f[i];

        // Cumulative frequency
        if (i == 0)
        {
            cf[i] = f[i];
        }
        else
        {
            cf[i] = cf[i - 1] + f[i];
        }

        totalFrequency += f[i];
        sumFX += fx[i];
    }

    // Calculate Mean
    mean = sumFX / totalFrequency;

    // Calculate Median
    float medianPosition = totalFrequency / 2.0;
    int medianClass = 0;

    for (i = 0; i < n; i++)
    {
        if (cf[i] >= medianPosition)
        {
            medianClass = i;
            break;
        }
    }

    float previousCF;

    if (medianClass == 0)
    {
        previousCF = 0;
    }
    else
    {
        previousCF = cf[medianClass - 1];
    }

    float classWidth =
        upper[medianClass] - lower[medianClass];

    median = lower[medianClass] +
             ((medianPosition - previousCF) /
              f[medianClass]) * classWidth;

    // Calculate Mode
    int modalClass = 0;

    for (i = 1; i < n; i++)
    {
        if (f[i] > f[modalClass])
        {
            modalClass = i;
        }
    }

    float previousFrequency;
    float nextFrequency;

    if (modalClass == 0)
    {
        previousFrequency = 0;
    }
    else
    {
        previousFrequency = f[modalClass - 1];
    }

    if (modalClass == n - 1)
    {
        nextFrequency = 0;
    }
    else
    {
        nextFrequency = f[modalClass + 1];
    }

    float modalClassWidth =
        upper[modalClass] - lower[modalClass];

    mode = lower[modalClass] +
           ((f[modalClass] - previousFrequency) /
            ((2 * f[modalClass]) -
             previousFrequency -
             nextFrequency)) * modalClassWidth;

    // Display table
    printf("\n\nCONTINUOUS SERIES\n\n");

    printf("%-20s %12s %12s %12s %12s\n",
           "Class Interval",
           "Frequency",
           "X",
           "FX",
           "CF");

    // Display each row
    for (i = 0; i < n; i++)
    {
        char interval[30];

        // Create complete class interval as one string
        sprintf(interval, "%.2f - %.2f",
                lower[i], upper[i]);

        printf("%-20s %12.2f %12.2f %12.2f %12.2f\n",
               interval,
               f[i],
               x[i],
               fx[i],
               cf[i]);
    }

    // Display totals separately
    printf("\nTotal Frequency (N) = %.2f\n", totalFrequency);
    printf("Sum of FX = %.2f\n", sumFX);

    // Display results
    printf("\nMean   = %.2f\n", mean);
    printf("Median = %.2f\n", median);
    printf("Mode   = %.2f\n", mode);

    return 0;
}