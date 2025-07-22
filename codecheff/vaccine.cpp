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
        if(a < b) cout<<" Too Early"<<endl;
        else if(a > c) cout<<"Too Late"<<endl;
        else cout<<" Take second dose now"<<endl;

    }

    return 0;
}