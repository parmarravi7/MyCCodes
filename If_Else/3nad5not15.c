#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number to check if divisible by 5 and 3 : ");
    scanf("%d", &a);
    /* if (a % 5 == 0 || a % 3 == 0)
    {
        if (a % 15 != 0)
        {
            printf("The number %d is divisible by either 5 or 3 but not 15", a);
        }
        else
        {
            printf("The number %d is divisible by 15", a);
        }
    } */
    if ((a % 5 == 0 || a % 3 == 0) && a % 15 != 0)
    {
        printf("The number %d is divisible by either 5 or 3 but not 15", a);
    }
    else
    {
        printf("The number %d is divisible by 15", a);
    }

    return 0;
}