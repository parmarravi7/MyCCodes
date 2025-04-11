#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the 1st no. : ");
    scanf("%d", &a);
    printf("Enter the 2nd no. : ");
    scanf("%d", &b);
    int r;
    int q = a / b;
    r = a - (q * b);
    printf("The remainder is : %d", r);
    return 0;
}