#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    int x = max(a,max(b,c)) - min(a,min(b,c));
    cout<<x<<endl;
    
    return 0;
}