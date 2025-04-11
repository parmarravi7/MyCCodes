#include <stdio.h>
#define PRINT_VARIABLE_NAME(var) printf("%s", #var)
int main()
{
    int ram, shyam, ajay;
    printf("Enter ages of ram,shyam and ajay :");
    scanf("%d %d %d", &ram, &shyam, &ajay);
    if (ram < shyam)
    {
        if (ram < ajay)
        {
            printf("The Youngest is ");
            PRINT_VARIABLE_NAME(ram);
        }
        else
        {
            printf("The Youngest is ");
            PRINT_VARIABLE_NAME(ajay);
        }
    }
    else
    {
        if (shyam < ajay)
        {
            printf("The Youngest is ");
            PRINT_VARIABLE_NAME(shyam);
        }
        else
        {
            printf("The Youngest is ");
            PRINT_VARIABLE_NAME(ajay);
        }
    }
    return 0;
}