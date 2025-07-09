#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int max = 0;
        if(a < b){
            max++;
        }
        if(a < c){
            max++;
        }
        if(a < d){
            max++;
        }
        cout<<max<<endl;    
    }

    return 0;
}