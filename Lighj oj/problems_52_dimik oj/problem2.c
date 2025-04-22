#include<stdio.h>
#include<string.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 0;i < t;i++)
    {
        char str[120];
        scanf("%s",str);
        int l = strlen(str);
        if(str[l-1] % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}
