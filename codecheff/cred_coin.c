#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        int a = x * y;
        int b = a / 100;
        printf("%d\n",b);
    }

    return 0;
}
