#include<stdio.h>

int main() {

    int a, b;
    printf("2 toogoo oruulna uu a, b: ");
    scanf("%d%d", &a, &b);

        while (a != b)
    {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    } printf("hamgiin ih yronhii huvaagch ni %d", a);

return 0;
}
