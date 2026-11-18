
// Program to calculate one period ahead forecast using 5-period Moving Average Method

#include <stdio.h>

int main()
{
    int n, i;

    // Input number of months
    printf("Enter the number of months: ");
    scanf("%d", &n);

    char month[n][20];
    float sale[n];
    float forecast[n];

    // Input month names and sales
    printf("\nEnter the month name and sale:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEnter month %d: ", i + 1);
        scanf("%s", month[i]);

        printf("Enter sale for %s: ", month[i]);
        scanf("%f", &sale[i]);
    }

    // First two forecasts are 0
    forecast[0] = 0;
    forecast[1] = 0;

    // Calculate 5-period moving average
    for(i = 2; i < n - 2; i++)
    {
        forecast[i] = (sale[i - 2] + sale[i - 1] + sale[i] +
                       sale[i + 1] + sale[i + 2]) / 5;
    }

    // Last two forecasts are 0
    forecast[n - 2] = 0;
    forecast[n - 1] = 0;

    // Display result
    printf("\n\nMonth\t\tSale\tForecast Using Moving Average Method (5 period ahead)\n");

    for(i = 0; i < n; i++)
    {
        if(i < 2 || i >= n - 2)
        {
            printf("%-12s\t%.0f\t0\n", month[i], sale[i]);
        }
        else
        {
            printf("%-12s\t%.0f\t(%.0f + %.0f + %.0f + %.0f + %.0f) / 5 = %.2f\n",
                   month[i],
                   sale[i],
                   sale[i - 2],
                   sale[i - 1],
                   sale[i],
                   sale[i + 1],
                   sale[i + 2],
                   forecast[i]);
        }
    }

    return 0;
}
