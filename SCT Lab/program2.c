
#include <stdio.h>

int main()
{
    int n, i, j, modeIndex = 0;

    float totalX = 0, totalF = 0, totalFX = 0;
    float mean, median, mode, medianPosition;

    printf("Enter how many values you want to enter: ");
    scanf("%d", &n);

    float x[n], f[n], fx[n], cf[n];

    // Input X values
    printf("Enter X values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }

    // Input frequencies
    printf("Enter F values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &f[i]);
    }

    // Sort X values and their frequencies
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(x[i] > x[j])
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

    // Calculate FX, CF and totals
    for(i = 0; i < n; i++)
    {
        fx[i] = x[i] * f[i];

        if(i == 0)
            cf[i] = f[i];
        else
            cf[i] = cf[i - 1] + f[i];

        totalX += x[i];
        totalF += f[i];
        totalFX += fx[i];
    }

    // Calculate Mean
    mean = totalFX / totalF;

    // Calculate Median
    medianPosition = (totalF + 1) / 2.0;

    for(i = 0; i < n; i++)
    {
        if(cf[i] >= medianPosition)
        {
            median = x[i];
            break;
        }
    }

    // Calculate Mode
    for(i = 1; i < n; i++)
    {
        if(f[i] > f[modeIndex])
        {
            modeIndex = i;
        }
    }

    mode = x[modeIndex];

    // Display the table

    printf("\tX\t\tF\t\tFX\t\tCF\n");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\n",
               x[i], f[i], fx[i], cf[i]);
    }

    printf("------------------------------------------------------------\n");

    printf("\tEX=%.0f\t\tEF=%.0f\t\tEFX=%.0f\n",
           totalX, totalF, totalFX);

    // Display results
    printf("Arithmetic mean using discrete series = %.2f\n", mean);
    printf("Median using discrete series = %.2f\n", median);
    printf("Mode using discrete series = %.2f\n", mode);

    return 0;
}
