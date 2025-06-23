#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int k = 2; k < 100; k++){
            if(a % k != 0 && b % k != 0 && c % k != 0){
                cout<<k<<endl;
                break;
            }
        }
    }

    return 0;
}
