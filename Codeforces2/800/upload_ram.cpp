#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans = 1 + (n-1) * k;
        cout<<ans<<endl;
    }
}