#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int a = n * 2;
        int b = m * 4;
        int sum = a + b;
        printf("%d\n",sum);
    }

    return 0;
}
