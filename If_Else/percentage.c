#include <stdio.h>
int main()
{
    float pr;
    printf("Enter the percentage : ");
    scanf("%f", &pr);
    if (pr <= 100 && pr >= 91)
    {
        printf("The result is excellent");
    }
    else if (pr <= 90 && pr >= 81)
    {
        printf("The result is very good");
    }
    else if (pr <= 80 && pr >= 71)
    {
        printf("The result is good");
    }
    else if (pr <= 70 && pr >= 61)
    {
        printf("The result is can do better");
    }
    else if (pr <= 60 && pr >= 51)
    {
        printf("The result is average");
    }
    else if (pr <= 50 && pr >= 41)
    {
        printf("The result is below average");
    }
    else if (pr <= 40)
    {
        printf("You have failed");
    }
    return 0;
}