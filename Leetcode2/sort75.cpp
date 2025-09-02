#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int noz = 0;
    int noo = 0;
    int noT = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            noz++;
        }
        else if(arr[i] == 1){
            noo++;
        }
        else{
            noT++;
        }
    }
    for(int i = 0; i < n; i++){
        if(i < noz) arr[i] = 0;
        else if(i < noz + noo) arr[i] = 1;
        else arr[i] = 2;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}