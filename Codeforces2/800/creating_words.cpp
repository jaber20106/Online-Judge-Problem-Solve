#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        swap(a[0],b[0]);
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}