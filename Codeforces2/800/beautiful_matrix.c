#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int row,col;
    int matrix[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j] == 1){
                row = i + 1;
                col = j + 1;

            }
        }
    }
    int move = abs(row - 3) + abs(col - 3);
    printf("%d\n",move);


    return 0;
}