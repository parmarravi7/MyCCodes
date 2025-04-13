#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}