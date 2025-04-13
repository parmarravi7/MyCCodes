#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int i,a=0;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {   a=1;
            break;
        }
    }
    if(n==1){
        printf("1 is neither a prime nor a composite");
    }
    else if (a==1)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is coposite");
    }

    return 0;
}