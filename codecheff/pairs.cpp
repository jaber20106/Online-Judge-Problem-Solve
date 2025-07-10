#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;

    pair<int,int> p(a,b);
    int z = (p.first + p.second) + (p.first * p.second);

    if(z == 111){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}