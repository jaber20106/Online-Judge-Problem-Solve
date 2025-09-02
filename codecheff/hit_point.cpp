#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d = a + b;
        int e = a + c;
        int f = b + c;
        int g = max(d,e);
        int h = max(g,f);
        cout<<h<<endl;
    }

    return 0;
}