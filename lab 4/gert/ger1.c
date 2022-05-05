#include<math.h>
#include<stdio.h>

int main () {

    int n;
    printf("toonii buh huvaagchdiig olno: ");
    scanf("%d", &n);

    printf("%d ", 1);

    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}
