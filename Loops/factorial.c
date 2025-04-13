#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number whose factorial you want :");
    scanf("%d",&n);
    int fact = 1;
    for(int j=1;j<=n;j++){
        fact = 1;
        
    for (int i = 1; i<=j;i++)
    {
        fact = fact * i;
        
    }

    printf("%d\n",fact);
}
    return 0;
}