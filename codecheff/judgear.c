#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int ar[5],count = 0;
        for(int i = 0; i < 5; i++){
            scanf("%d",&ar[i]);
            if(ar[i] == 1){
                count++;
            }
        }

        if (count >= 4) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }



    }

    return 0;
}

