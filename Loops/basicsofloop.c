#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number of times the loop should run:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Hello World\n");
    }
    return 0;

}