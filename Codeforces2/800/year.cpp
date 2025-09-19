#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
 
    int n;
    cin>>n;
    int a = n / 365;
    int b = (n % 365) / 30;
    int c = (n % 365) % 30;
    cout<<a<<" "<<"years"<<endl;
    cout<<b<<" "<<"months"<<endl;
    cout<<c<<" "<<"days"<<endl;
    
    return 0;
}