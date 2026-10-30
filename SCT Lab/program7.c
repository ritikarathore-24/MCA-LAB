// Program to calculate one period ahead forecast using Naive Method

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of days: ");
    scanf("%d", &n);

    float demand[n];
    float forecast[n + 1];

    // Input demand for actual days
    printf("\nEnter the demand for each day:\n");

    for(i = 0; i < n; i++)
    {
        printf("Demand for Day %d: ", i + 1);
        scanf("%f", &demand[i]);
    }

    // First day's forecast is 0
    forecast[0] = 0;

    // Forecast = Previous day's demand
    for(i = 1; i <= n; i++)
    {
        forecast[i] = demand[i - 1];
    }

    // Display forecasting table
    printf("\nNo. of Days\tDemand\t\tForecasting by Naive Method\n");

    for(i = 0; i <= n; i++)
    {
        if(i < n)
        {
            printf("%d\t\t%.0f\t\t%.0f\n",
                   i + 1, demand[i], forecast[i]);
        }
        else
        {
            // Future day: demand is not known, so display 0
            printf("%d\t\t0\t\t%.0f\n",
                   i + 1, forecast[i]);
        }
    }

    return 0;
}