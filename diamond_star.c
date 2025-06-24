#include <stdio.h>

int main(){
    int n, i, j, s, l;
    printf("Enter n value: ");
    scanf("%d", &n);
    for(i = -n; i <= n; i++){
        if(i < 0){
            l = -i;
        }
        else{
            l = i;
        }
        for(s = 0; s < l; s++){
            printf("  ");
        }
        int temp = 2 * (n - l);
        for(j = 0; j < temp + 1; j++){
            printf("* ");

        }
        printf("\n");
    }

    return 0;
}