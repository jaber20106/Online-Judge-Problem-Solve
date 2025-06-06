#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    long long mul = 1;
    for(int i = 1; i <= n; i++){
        mul = mul * i;
    }
    cout<<mul<<endl;
    }
}