#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int count = 0;
        for(int i = 0; i < n; i++){
            scanf("%d",&arr[i]);
        }

        for(int i = 0; i < n; i++){
            if(arr[i] >= 1000){
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
