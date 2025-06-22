#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    int y = v.size();
    
    for(int i = 0; i < y; i++){
        cin>>v[i];
    }
    vector<int>leaders;

    int max = INT_MIN;
    for(int i = y-1; i >= 0; i--){
        if(v[i] >= max){
            leaders.push_back(v[i]);
            max = v[i];
        }
    }
    reverse(leaders.begin(), leaders.end());

    for(int val : leaders){
    cout << val << " ";
}


    return 0;
}