#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j=j+1){
            printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}
