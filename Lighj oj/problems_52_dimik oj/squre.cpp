#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = sqrt(n);
        if(x * x == n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}