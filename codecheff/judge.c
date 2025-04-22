#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
         int count = 0, r;


        for (int i = 0; i < 5; i++) {
            scanf("%d", &r);
            if (r == 1) {
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
