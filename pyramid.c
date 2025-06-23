#include <stdio.h>

int main(){
    int n; //height of paramid
    int i; // height of paramid - 1
    int s; //space around the paramid  n - i - 1
    int j; // paramid characted i * 2 + 1

    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(s = 0; s < n - i - 1; s++){
            printf("  ");
        }
        for(j = 0; j < i * 2 + 1; j++){
            printf(" *");
        }
        
        printf("\n");
    }

    return 0;
}