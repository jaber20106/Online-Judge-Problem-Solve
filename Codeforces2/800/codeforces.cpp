#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        string s = "codeforces";
        char c;
        cin>>c;
        int flag = 0;
        for(char i : s){
            if(i == c){
               flag = 1;
            }
            
        }
        if(flag == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}