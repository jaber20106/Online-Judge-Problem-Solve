#include<stdio.h>
int main(){

    int n;
    int even = 0,odd = 0;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&ar[i]);
    }

    for(int i = 0; i < n; i++){
        if(ar[i] % 2 == 0){
            even++;

        }
        else{
            odd++;
        }
    }
    if(even > odd){
          printf("READY FOR BATTLE\n");
    }
    else{
          printf("NOT READY\n");
    }

    return 0;
}
