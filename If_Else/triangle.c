#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 positive integers :");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("They are sides of a valid triangle");
    }
    return 0;
}