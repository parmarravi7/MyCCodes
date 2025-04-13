#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            for(j=1;j<=i;j++){
                printf("%d ",j);
            }
        }else if(i%2==0){
            for(j=1;j<=i;j=j+1){
                printf("%c ",64+j);
            }
        }
        printf("\n");
    }
    return 0;
}