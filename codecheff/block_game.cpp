#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string x = s;
        reverse(x.begin(), x.end());
        if(x == s){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }


    }
    
    return 0;
}