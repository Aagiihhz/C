#include<stdio.h>

int main () {
    int n, a, sum = 0;
    printf("Tsifruudiin niilber oluulah toogoo oruulna uu: ");
    scanf("%d", &n);
    for(int i = 1; n > 0; i++){
        a = n % 10;
        n = n / 10;
        sum = sum + a;
    }
    printf("%d", sum);
    return 0;

}
