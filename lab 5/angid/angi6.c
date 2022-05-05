#include<stdio.h>

int main() {

    int n, i, j;
    scanf("%d", &n);

    for(i = 1; i < n + 1; i++){
        for(j = 0; j != i; j++){
            printf("x");
        }
        printf("\n");
    }
    for(i = n; i > 0; --i){
        for(j = i; j > 1 ; --j){
            printf("x");
        }
        printf("\n");
    }

return 0;
}
