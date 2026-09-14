// Program to convert seconds into hours, minutes and seconds

#include <stdio.h>

int main()
{
    int seconds, hours, mins, secs;

    printf("Enter the seconds: ");
    scanf("%d", &seconds);

    hours=seconds/3600;
    printf("Hours= %d\n", hours);

    mins=(seconds%3600)/60;
    printf("Minutes= %d\n", mins);

    secs=seconds%60;
    printf("Seconds= %d\n", secs);

    return 0;

}