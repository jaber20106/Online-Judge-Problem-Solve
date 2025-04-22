#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1;i <= t; i++){
        int x,y;
        scanf("%d %d",&x,&y);
        int sum = x + y;
        if(sum > 6){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
