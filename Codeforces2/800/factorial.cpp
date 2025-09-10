#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long mul = 1;
        for(int i = 1; i <= n; i++){
            mul *= i;
        }
        cout<<mul<<endl;
    }

    return 0;
}