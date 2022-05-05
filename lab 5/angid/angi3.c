#include<stdio.h>

int main (){

    int i, j, m;
    for(i = 1; i < 11; i++){

        for(j = 1; j < 11; j++){
            m = i * j;
            printf("%d, ", m);
            if(j == 10)
                printf("\n");
        }

    }


    return 0;
}
