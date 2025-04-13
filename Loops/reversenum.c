#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int dig =n;
    int rev=0;
    for(int i=1;n!=0;i++){

        rev = (rev*10) + (n%10);
        n=n/10;

    }
    printf("The reverse number of the given number %d is %d",n,rev);
    return 0;
}