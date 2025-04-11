#include <stdio.h>
int main()
{
    float a;
    printf("Enter the number whose fractional part should be printed : ");
    scanf("%f", &a);
    int r = a / 1;
    float f = a - r;
    printf("The fraction of the number entered is : %f", f);
    return 0;
}