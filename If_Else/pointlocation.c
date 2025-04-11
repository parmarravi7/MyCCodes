#include<stdio.h>
int main(){
    float x,y;
    printf("Enter the coordinates of the point : ");
    scanf("%d %d",&x,&y);
    if(x==0 && y!=0){
        printf("The point lies on the y axis");
    }
    else if(x!=0 && y==0){
        printf("The point lies on the x axis");
    }else if(x==0 && y==0){
        printf("The point lies on the origin");
    }else{
        printf("The point lies in the quadrant");
    }
    return 0;
}