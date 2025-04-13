#include <stdio.h>
int main()
{
    int a=1,b=1,c=0,n;
    printf("Enter the number of the term : ");
    scanf("%d",&n);

    for(int i=1;i<=n-2;i++){

        c=a+b;
        a=b;
        b=c;

    }
    printf("%d\n",c);
    return 0;
}