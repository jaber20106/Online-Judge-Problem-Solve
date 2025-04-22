#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        if(x <= 70){
            printf("0\n");
        }
        else if(x > 70 && x <= 100){
            printf("%d\n",500);
        }
        else{
            printf("%d\n",2000);
        }
    }

    return 0;
}
