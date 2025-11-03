#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        string s, t;
        cin >> n;
        cin >> s >> t;
        string x = s;
        sort(x.begin(),x.end());
        string y = t;
        sort(y.begin(),y.end());
        if(x == y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}