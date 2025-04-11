#include <stdio.h>
int main()
{
    int b, h;
    printf("Enter the breadth of the rectangle : ");
    scanf("%d", &b);
    printf("Enter the height of the rectangle : ");
    scanf("%d", &h);
    int a, p;
    a = h * b;
    p = 2 * (h + b);
    if (a > p)
    {
        printf("The area of the rectangle is greater than the parameter");
    }
    else
    {
        printf("The area of the rectangle is not greater than the parameter");
    }
    return 0;
}