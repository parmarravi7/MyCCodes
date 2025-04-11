#include <stdio.h>
int main()
{
    int c, s;
    printf("Enter the cost price : ");
    scanf("%d", &c);
    printf("Enter the sale price : ");
    scanf("%d", &s);
    if (s > c)
    {
        printf("The seller made a profit of %d : ", s - c);
    }
    if (s < c)
    {
        printf("The seller made a loss of %d : ", c - s);
    }
    else
    {
        printf("The seller made neither a profit nor a loss");
    }
    return 0;
}