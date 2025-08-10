#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){

        int n,j,k,i;
        int mx = 0;
        cin>>n>>j>>k;
        vector<int>v(n);
        for( i = 0; i < v.size(); i++){
            cin>>v[i];
            mx = max(mx,v[i]);
        }
        
        if(k > 1 || v[j-1] == mx) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


    return 0;
}