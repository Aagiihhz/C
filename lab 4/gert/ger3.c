#include<stdio.h>

int main() {

    int a = 1, i = 2; // a ni odor, i ni garag

    while(a < 32){
        if(i % 7 == 1)
            printf("%d Davaa, ", a);
        else if(i % 7 == 2)
            printf("%d Mygmar, ", a);
        else if(i % 7 == 3)
            printf("%d Lhagva, ", a);
        else if(i % 7 == 4)
            printf("%d Purev, ", a);
        else if(i % 7 == 5)
            printf("%d Baasan, ", a);
        else if(i % 7 == 6)
            printf("%d Bymba, ", a);
        else
            printf("%d Nym\n", a);
        if(a == 8)
            printf(" <- Buh niitiin amraltiin odor ,");
        a++;
        i++;

    }
return 0;
}
