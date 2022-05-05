#include<stdio.h>

int main()
{
    int i, x, y, z;
    for(x = 1; x <= 60; x++)
    {
        for(y = 1; y <= 80; y++)
        {
            for(z = 1; z <= 100; z++)
            {
                if(z * z == x * x + y * y)
                    printf("%d %d %d\n", x, y, z);
            }
        }
    }

    return 0;
}
