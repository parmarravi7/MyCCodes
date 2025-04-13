#include<stdio.h>
int main(){
    int i,j,n,space;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a=1;
    for (int i = n; i >= 1; i--) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d  ",a);
            a++;
        }

    
        if (i != n) {
            int spaces = 2 * (n - i) - 1;
            for (int j = 1; j <= spaces; j++) {
                printf("   ");
                
            }
        }

        
        for (int j = 1; j <= i; j++) {
            a--;
            if (i == n && j == 1) continue;
            printf("%d  ",a);
            
        }

        printf("\n");
        a=1;
    }

    return 0;
}