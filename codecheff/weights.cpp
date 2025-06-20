#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int w,a,b,c;
        cin>>w>>a>>b>>c;
        int x = a+b;
        int y = b+c;
        int z = a+c;
        if(w == x || w == y || w == z){
            cout<<"Yes"<<endl;
        }
        else if(w == a || w == b || w == c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}