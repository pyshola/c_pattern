#include <stdio.h>

int main(){
    int n, i, j;
    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        int temp = i + 1;
        for(j = 0; j < temp; j++)
            printf("* ");
        printf("\n");
        
    }
    return 0;
}