#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,x;
        scanf("%d%d%d%d",&a,&b,&c,&x);
        int m = a + b;
        int n = b + c;
        int p = a + c;
        if(m >= x){
            printf("YES\n");
        }
        else if(n >= x){
            printf("YES\n");
        }
        else if(p >= x){
            printf("YES\n");
        }
        else{
             printf("NO\n");
        }
    }

    return 0;
}
