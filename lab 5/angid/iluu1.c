#include<stdio.h>

int main() {

    int n, i, k;
    scanf("%d", &n);

    for(i = 2; i < n; i++){
        for(int j = 2; j < i / 2; j++){
            k = 1;
            if(i % j == 0)
            {
                k = 0;
                break;
            }
        }
        if(k)
            printf("%d ", i);
    }

return 0;
}
