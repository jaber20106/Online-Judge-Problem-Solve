#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        int a = x * 10;
        int b = y * 5;
        int sum = a + b;
        printf("%d\n",sum);
    }

    return 0;
}
