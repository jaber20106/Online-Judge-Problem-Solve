#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n,m;
    cin>>n>>m;
    for(int i = n + 1; i <= m; i++){
        if(prime(i)){
            if(i == m){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
    }

    return 0;
}