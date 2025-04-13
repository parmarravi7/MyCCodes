#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i;
    for(i=2;i<=n;i++){
        if(n%i==0){
            if(i==n){
                printf("The number is prime");
            }else{
                printf("The number is not prime");
            }
        }
        
    }
    
    return 0;

}