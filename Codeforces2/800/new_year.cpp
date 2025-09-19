#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int x = 1440 - (60*h) - m;
        cout<<x<<endl;
    }
    
    return 0;
}