#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        int a = 7 - 3;
        int b = 1;
        int sum = (a * x) + (b * y);
        printf("%d\n",sum);

    }

    return 0;
}
