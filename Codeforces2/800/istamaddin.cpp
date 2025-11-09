#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;


int main(){
    
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        int even_count = 0, odd_count = 0;

        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 0) even_count++;
            else odd_count++;
        }
        if(even_count == v.size() || odd_count == v.size()){
            for(int i = 0; i < n; i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else{
            sort(v.begin(), v.end());
            for(int i = 0; i < n; i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }

    
    return 0;
}