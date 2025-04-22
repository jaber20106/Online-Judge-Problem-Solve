#include<stdio.h>
int main(){

    int a,b,year = 0;
    scanf("%d%d",&a,&b);
    for(int i = 0;  a <= b; i++){

            a *= 3;
            b *= 2;
            year++;
    }
     printf("%d\n",year);

    return 0;
}
