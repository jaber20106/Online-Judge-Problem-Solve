    #include<bits/stdc++.h>
    #include<string>
    #include<iostream>
    using namespace std;

    int main(){
        
        int n,b,d;
        cin>>n>>b>>d;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        int ans = 0;
        long long cur = 0; // waste
        
        for(int i = 0; i < n; i++){
            if(v[i] > b) continue;
            cur += v[i];
            if(cur > d){
                ans++;
                cur = 0;
            }
        }
        cout<<ans<<endl;
        
        return 0;
    }