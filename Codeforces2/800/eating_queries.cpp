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

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());


    // convert prefix sum
    for(int i = 1; i < n; i++){
        v[i] = v [i] + v[i-1];
    }
    while(q--){
        int x;
        cin>>x;
        int lb = lowerbound(n,v,x);
        lb+=1;
        if(lb > n) cout<<"-1"<<endl;
        else cout<<lb<<endl;
    }

}

int main(){
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}