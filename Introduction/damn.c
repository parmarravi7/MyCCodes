#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the 1st no. : ");
    scanf("%d", &a);
    printf("Enter the 2nd no. : ");
    scanf("%d", &b);

    if (b == 0)
    {
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    int q = a / b;

    // Fix for floor division if a and b have opposite signs and there's a remainder
    if ((a < 0) != (b < 0) && (a % b != 0))
    {
        q -= 1;
    }

    int r = a - q * b;

    printf("The remainder is : %d\n", r);
    return 0;
}
