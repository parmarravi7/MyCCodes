#include <stdio.h>
int main()
{
    int i;
    for (i = 65; i <= 90; i++)
    {
        char ch = (char)i;
        printf("%d %c\n",i,ch);
    }
    return 0;
}