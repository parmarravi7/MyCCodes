#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n%2!=0){
    for(i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
        if(j==((n+1)/2) || i==((n+1)/2)){
            printf("*  ");
        }
        else{
            printf("   ");
        }
        
       }
       printf("\n");
    }
}
else{
    printf("Enter a Odd Number!!");
}
    return 0;
}