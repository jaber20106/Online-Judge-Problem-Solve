#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d%d",&n,&x);
        int a = (n + 5) / 6;
        int b = a * x;
        printf("%d\n",b);
    }

    return 0;
}
