#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int lowerbound(int n, vector<int>&v, int tg){
    int lo = 0, hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(v[mid] == tg){
            return mid;
            break;
        }
        else if(v[mid] > tg){
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    return lo;
}


int main(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    //prefix sum
    for(int i = 1; i < n; i++){
        v[i] = v[i] + v[i-1];
    }


    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;

        int lb = lowerbound(n,v,q)+1;
        cout<<lb<<endl;
    }
    
    return 0;
}