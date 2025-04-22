#include<stdio.h>
int main(){

    int arr[100] = {10,20,30,40,50};
    int size = 5;
    int newelement = 60;

    arr[size] = newelement;
        size++;


    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
