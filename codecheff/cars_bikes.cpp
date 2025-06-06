#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cars = n / 4;
        int bike = n % 4;
        if(bike >= 2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}