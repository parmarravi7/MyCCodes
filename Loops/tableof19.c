#include <stdio.h>
int main()
{

    for (int i = 1; i <= 200; i++)
    {
        if (i % 19 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}