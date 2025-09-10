#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x = max(a,b);
        int y = max(c,d);

        vector<int> v = {a,b,c,d};
        sort(v.begin(),v.end());
        if((x == v[2] || x == v[3]) && (y == v[2] || y == v[3])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
//
//x == v[2] || x == v[3]