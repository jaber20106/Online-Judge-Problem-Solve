#include<stdio.h>

int main(){
    
    int n,k,i;
    scanf("%d %d",&n,&k);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int x = arr[k-1];
    
    int count = 0;
    for(i = 0; i < n; i++){
        if(arr[i] >= x && arr[i] > 0){
            count++;
    }
    }
    printf("%d\n",count);

    return 0;
}