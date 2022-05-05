#include<stdio.h>

int main()
{
    int n, i, j, zai;
    printf("n too buyu moriin toog oruul\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(zai = 1; zai <= n - i; zai++)
        {
            printf(" ");
        }
        for(j = 1; j <= (i * 2) - 1; j++)
        {
            printf("x");
        }
        printf("\n");
    }

    return 0;
}
