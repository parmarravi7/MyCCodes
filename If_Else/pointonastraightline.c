#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("Enter the coordinates of the first point: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter the coordinates of the second point: ");
    scanf("%f %f",&x2,&y2);
    printf("Enter the coordinates of the third point: ");
    scanf("%f %f",&x3,&y3);
    float m1 = ((x2-x1)/(y2-y1));
    float m2 = ((x3-x2)/(y3-y2));
    if(m1==m2)
    {
        printf("The given points are on a straight line");
    }
    else{
        printf("The given points are not on a straight line");
    }
    return 0;
}