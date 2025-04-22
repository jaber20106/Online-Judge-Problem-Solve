#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int lucky = 4+3*(n-1);
    printf("%d\n",lucky);

    return 0;
}
