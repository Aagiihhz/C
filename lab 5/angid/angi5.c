#include<stdio.h>

int main (){

    int n, i, j;
    scanf("%d", &n);

    for(i = 1; i < n + 1; i++){
        for(j = 0; j < n + 1; j++){
            if((i + j) % 2 == 0)
                printf("x");
            else printf("o");
        }
        printf("\n");
    }

return 0;
}
