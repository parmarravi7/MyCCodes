#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    int min=0;
    for(i=1;i<=(2*n-1);i++){
        for(j=1;j<=2*n-1;j++){
            int a=i;
            int b=j;
            if(i>n)  a=2*n-i;
            if(j>n) b=2*n-j;
            if(i<j) min=a;
            else min=b;
            printf("%d ",n-min+1);
        }
        printf("\n");
    }
    return 0;
}