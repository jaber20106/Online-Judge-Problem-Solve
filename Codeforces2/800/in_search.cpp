#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag = 0;
    vector<int>v(n);
    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 1){
            flag = 1;
        }
    }
    if(flag == 1) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;

}