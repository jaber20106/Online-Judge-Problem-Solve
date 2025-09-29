#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = a ^ b;
    int y = c ^ d;
    if(x > y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}
