    #include<stdio.h>
    int main(){

        int t;
        scanf("%d",&t);
        while(t--){
            long long n;
            scanf("%lld",&n);
            long long mul = 1;
            for(int i = 1; i <= n; i++){
                mul *= i;
            }
            printf("%lld\n",mul);
        }

        return 0;
    }
