#include <stdio.h>
int main()
{
int n;
printf("Enter the number whose table you want to print :");
scanf("%d",&n);

    for (int i = n; i <= (n * 10); i=i+n)
    {
        if (i % n == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}