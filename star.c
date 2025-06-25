#include <stdio.h>

int main(){
    int n, i, j;
    printf("Enter n value: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i++){
        for(j = -n; j <= n; j++){
            if(-(n - i) < j && j < (n - i)){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");

    }

    return 0;
}