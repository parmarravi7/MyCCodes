#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    int a=3;

    for (int i = 1; i >0; i++)
    {
        
            printf("%d\n", a);
        a=a*4;
    }
    return 0;
}