#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        int mx = *max_element(v.begin(),v.end());
        cout<<mx<<endl;
    }
    
    return 0;
}