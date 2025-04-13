#include<stdio.h>
int main(){
    int a,b,power;
    printf("Enter the base:");
    scanf("%d",&b);
    printf("Enter the power:");
    scanf("%d",&a);
    power = 1;
    for(int i=1;i<=a;i++){
        power = power * b;

    }
    printf("%d to the power of %d is %d",b,a,power);
    
    return 0;
}