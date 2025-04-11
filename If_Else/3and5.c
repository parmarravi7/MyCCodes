#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number to check if divisible by 5 and 3 : ");
    scanf("%d", &a);
    if (a % 5 == 0 && a % 3 == 0)
    {
        printf("The number %d is divisible by both 5 and 3", a);
    }
    else
    {
        printf("The number %d is not divisible by both 5 and 3", a);
    }
    return 0;
}