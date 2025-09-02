#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int x = a + c;
        int mini = min(x,b);
        if(mini >= n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}