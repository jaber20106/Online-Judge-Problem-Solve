#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }
    int tg;
    cin>>tg;
    for(int i = 0; i < v.size()-1; i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] + v[j] == tg){
                cout<<"["<<i<<","<<j<<"]"<<endl;
                return 0;
            }
        }
    }
}