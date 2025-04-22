#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        int a = x * 3;
        if(a <= y){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }

    return 0;
}
