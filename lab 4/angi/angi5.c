 #include<stdio.h>

 int main(){
    int n, i = 0;
    float f;
    scanf("%d", &n);

    f = (9.0 / 5.0) * i + 32;
    if(n >= f)
    {
        do{
            printf("%.1f\n", f);
            i++;
            f = (9.0 / 5.0)*i + 32;
        }while(n >= f);
    }
    else return 0;
 }
