#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}