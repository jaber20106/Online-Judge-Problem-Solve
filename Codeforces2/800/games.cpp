#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n % 3){
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
    }
    
    return 0;
}