#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int x =  k * w * (w + 1) / 2;
    int y = x - n;
    if(x <= n){
        cout<<0<<endl;
    }
    else{
        cout<<y<<endl;
    }
}