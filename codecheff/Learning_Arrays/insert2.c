#include<stdio.h>
int main(){

    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element: ");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    int newvalue = 100;
    int position = 2;

    for(int i = size; i > position; i--){
        arr[i] = arr[i - 1];
    }
    arr[position] = newvalue;
    size++;

     for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
