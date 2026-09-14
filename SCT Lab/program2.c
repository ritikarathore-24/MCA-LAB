#include <stdio.h>

int main()
{
    int n, i, j;

    float totalFrequency = 0;
    float sumFX = 0;
    float mean, median, mode;

    // Taking number of observations
    printf("Enter the number of observations: ");
    scanf("%d", &n);

    float x[n];
    float f[n];
    float fx[n];
    float cf[n];

    // Taking X values and frequencies
    printf("\nEnter the values of X and their frequencies:\n\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter X[%d]: ", i + 1);
        scanf("%f", &x[i]);

        printf("Enter Frequency[%d]: ", i + 1);
        scanf("%f", &f[i]);

        printf("\n");
    }

    // Sorting X values in ascending order
    // Frequencies are also exchanged accordingly
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                float temp;

                temp = x[i];
                x[i] = x[j];
                x[j] = temp;

                temp = f[i];
                f[i] = f[j];
                f[j] = temp;
            }
        }
    }

    // Calculate FX, CF, total frequency and sum of FX
    for (i = 0; i < n; i++)
    {
        // Calculate FX
        fx[i] = x[i] * f[i];

        // Calculate cumulative frequency
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

    // Calculate Median using professor's formula
    // Median position = (N + 1) / 2
    float medianPosition = (totalFrequency + 1) / 2.0;

    for (i = 0; i < n; i++)
    {
        if (cf[i] >= medianPosition)
        {
            median = x[i];
            break;
        }
    }

    // Calculate Mode
    // Mode is the X value having the highest frequency
    int modeIndex = 0;

    for (i = 1; i < n; i++)
    {
        if (f[i] > f[modeIndex])
        {
            modeIndex = i;
        }
    }

    mode = x[modeIndex];

    // Display the table
    printf("\n\nDISCRETE SERIES\n\n");

    printf("%-12s %12s %12s %12s\n",
           "X",
           "Frequency",
           "FX",
           "CF");

    // Display table rows
    for (i = 0; i < n; i++)
    {
        printf("%-12.2f %12.2f %12.2f %12.2f\n",
               x[i],
               f[i],
               fx[i],
               cf[i]);
    }

    // Display total frequency and sum of FX
    printf("\nTotal Frequency (N) = %.2f\n", totalFrequency);
    printf("Sum of FX = %.2f\n", sumFX);

    // Display results
    printf("\nMean   = %.2f\n", mean);
    printf("Median = %.2f\n", median);
    printf("Mode   = %.2f\n", mode);

    return 0;
}