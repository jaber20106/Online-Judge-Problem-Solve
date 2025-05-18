#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        int a = x / y;
        printf("%d\n",abs(a));
    }

    return 0;
}