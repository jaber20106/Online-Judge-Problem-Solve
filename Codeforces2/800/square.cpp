#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x[4],y[4];
        for(int i = 0; i < 4; i++){
            cin>>x[i]>>y[i];
        }
        int mn = x[0];
        for(int i = 0; i < 4; i++){
            if(x[i]<mn) mn = x[i];
        }
        int mx = x[0];
        for(int i = 0; i < 4; i++){
            if(x[i]>mx) mx = x[i];
        }
        cout<<(mn-mx)*(mn-mx)<<endl;
    }
}