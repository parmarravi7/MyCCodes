#include<stdio.h>
int main(){
    int i, n, space;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Top pyramid
    for(i = 1; i <= n; i++){
        for(space = 1; space <= n - i; space++){
            printf("  ");
        }
        for(int j = 1; j <= (2*i) - 1; j++){
            printf("* ");
        }
        printf("\n");
    }

    // Bottom inverted pyramid
    for(i = n - 1; i >= 1; i--){
        for(space = 1; space <= n - i; space++){
            printf("  ");
        }
        for(int j = 1; j <= (2*i) - 1; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
