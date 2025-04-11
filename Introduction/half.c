#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number to be halved : ");
    scanf("%d", &a);
    float h = a / 2.00;
    printf("The halved number will be : %f", h);
    return 0;
}