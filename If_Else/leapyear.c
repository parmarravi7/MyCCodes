#include <stdio.h>
int main()
{
    int y;
    printf("Enter the year : ");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        printf("The year %d is a leap year", y);
    }
    else
    {
        printf("The year %d is not a leap year", y);
    }
    return 0;
}