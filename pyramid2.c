//Same as the pyramid we have before but I reduce the loop to 2
//using this calcution max(s) + max(j) = (n - i -1) + i * 2 + 1 = n + i

#include <stdio.h>

int main(){
    int n, i, j;

    printf("Enter n value: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n + i; j++){
            if(j < n - i - 1){
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