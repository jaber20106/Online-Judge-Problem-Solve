#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i + j == n) ans++;
            }
        }
        cout<<ans<<endl;
    }
}