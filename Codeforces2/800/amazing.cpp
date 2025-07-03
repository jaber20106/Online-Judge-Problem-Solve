#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int amazing = 0;
    int best = arr[0];
    int worst = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > best){
            amazing++;
            best = arr[i];
        }
        else if(arr[i] < worst){
            amazing++;
            worst = arr[i];
        }
    }
    cout<<amazing<<endl;

    return 0;
}