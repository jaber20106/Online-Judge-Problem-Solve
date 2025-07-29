#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n,i;
    cin>>n;
    vector<int>v(n);
    for( i = 0; i < v.size(); i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for( auto it : v){
        cout<<it<<" ";
    }

    return 0;
}