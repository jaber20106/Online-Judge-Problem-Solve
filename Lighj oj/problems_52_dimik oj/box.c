    #include<stdio.h>
    int main(){

        int t;
        scanf("%d",&t);
        while(t--){
            int n;
            scanf("%d",&n);
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    printf("*");
                }
                printf("\n");
            }
            if(t > 0)
            {
                printf("\n");
            }

        }

        return 0;
    }
