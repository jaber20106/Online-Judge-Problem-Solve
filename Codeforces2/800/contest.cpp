#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n,k;
    cin>>n>>k;

    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(5 - v[i] >= k){
            count++;
        }
    }
    cout<<count/3<<endl;
    
    return 0;
}