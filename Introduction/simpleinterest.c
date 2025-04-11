#include <stdio.h>
int main()
{
    float p, r, t, si;
    p = 250000;
    r = 7.5;
    t = 5;
    si = p * r * t / 100;
    printf("The simple interest will be : %f", si);
    return 0;
}