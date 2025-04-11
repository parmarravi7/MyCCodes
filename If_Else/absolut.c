#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    int i = a;
    if (a < 0)
    {
        a = 0 - a;
        printf("The absolute value of %d is %d", i, a);
    }
    else
    {
        printf("The absolute value of %d is %d", i, a);
    }
    return 0;
}