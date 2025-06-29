#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int a,b,m;
        cin>>a>>b>>m;
        int x = (b - a + m) % m;
        int y = (a - b + m) % m;
        int ans = min(x,y);
        cout<<ans<<endl;
    }

    return 0;
}