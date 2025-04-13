#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;n!=0;i++){
        if(n%2==0){

        sum = sum + (n%10);
        n=n/10;
        }

    }
    printf("The sum of digits in the given number is %d",sum);
    return 0;
}