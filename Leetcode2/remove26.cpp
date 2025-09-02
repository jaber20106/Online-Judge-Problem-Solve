#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int i = 0;
    for(int j = 0; j < n; j++){
        if(v[j] != v[i]){
            i++;
            v[i] = v[j];
        }
    }
    int k = i + 1;

    for (int x = 0; x < k; x++) {
        cout << v[x] << " ";
    }
    cout << endl;
    return 0;
}