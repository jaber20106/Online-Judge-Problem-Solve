#include<stdio.h>
int main(){

    int ar[4];
    int count = 0;
    for(int i = 0; i < 4; i++){
        scanf("%d",&ar[i]);
    }

    for(int i = 0; i < 4; i++){
        if(ar[i] >= 10){
            count++;

        }


    }
    printf("%d\n",count);

    return 0;
}
