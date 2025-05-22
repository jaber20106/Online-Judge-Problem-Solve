#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int x = n / 5;
    if(n % 5 != 0){
        x += 1;
    }
    printf("%d\n",x);

    return 0;
}