#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout << min(x, y) << ' ' << max(x, y) << '\n';	
    }
    
    return 0;
}