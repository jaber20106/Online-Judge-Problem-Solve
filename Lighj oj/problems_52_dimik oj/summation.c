#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a = n % 10;
        int b = n / 10000;
        int sum = a + b;
        printf("Sum = %d\n",sum);
    }

    return 0;
}
