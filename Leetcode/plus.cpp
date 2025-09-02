#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    if(v[n-1] == 9){
        v[n-1] = 10;
    }
    else{
        v[n-1] += 1;
    }

    for(int i = 0; i < n; i++){
        cout<<v[i];
    }

    return 0;
}