#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int mat[5][5];
    int x,y;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>mat[i][j];
            if(mat[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    int move = abs(x - 3) + (y - 3);
    cout<<move<<endl;

    return 0;
}