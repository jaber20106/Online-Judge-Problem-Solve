#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int sum = 0;
    int h = 0;
    int count = 0;

    while(count <= n){
        h++;
        sum = h * (h + 1) / 2;
        count += sum;
    }
    cout<<h-1<<endl;

    return 0;
}