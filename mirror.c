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
        for(s = 0; s < n - l; s++){
            printf(" ");
        }
        for(j = 0; j < l + 1; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    //second loop
    for(i = -n; i <= n; i++){
        if(i < 0){
            l = -i;
        }
        else{
            l = i;
        }
        
        
        for(j = 0; j < n + 1; j++){
            if(j < n - l)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }


    return 0;
}
