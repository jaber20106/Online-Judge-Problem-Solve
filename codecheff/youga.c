#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a = n / 12;
    if(n < 12){
        printf("0\n");
    }
    else{
        printf("%d\n",a);
    }

    return 0;
}
