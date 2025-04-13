#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number :");
    scanf("%d", &n);
    if(n%2==0){
        printf("Enter a odd number!!");
    }else{
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == i || j == 6-i )
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
    return 0;
}