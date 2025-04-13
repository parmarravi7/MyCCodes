#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int count=0;
    for(int i=1;n!=0;i++){
        n=n/10;
        count++;

    }
    printf("The digits in the given number is %d",count);
    return 0;
}