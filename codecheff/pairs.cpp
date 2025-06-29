#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;
    int x = a + b;
    int y = a * b;
    int z = x + y;
    if(z == 111){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}