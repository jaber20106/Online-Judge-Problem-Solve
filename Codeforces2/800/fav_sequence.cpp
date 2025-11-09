#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int left = 0;
    int right = n-1;
    vector<int>ans;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout<<v[left]<<" ";
            left++;
        }
        else{
            cout<<v[right]<<" ";
            right--;
        }
    }
    cout<<endl;
    
}

int main(){
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}