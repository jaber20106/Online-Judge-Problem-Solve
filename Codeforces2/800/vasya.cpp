#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;
    int x = min(a,b);
    int y = abs(a-b);
    int z = y / 2;
    cout<<x<<" "<<z<<endl;

    return 0;
}