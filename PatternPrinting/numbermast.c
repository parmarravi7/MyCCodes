#include <stdio.h>
int main()
{
    int i, n, space;
    printf("Enter the number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            printf("  ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (j <= i)
            {
                printf("%d ", j);
            }
            else
            {
                    printf("%d ", 2*i -j);
                
            }
        }
        printf("\n");
    }
    return 0;
}