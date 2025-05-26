#include<iostream>
using namespace std;
int pri(int n){
    for(int i = 1; i <= n; i++){
        cout<<i;
        if (i != n) cout << " ";
    }
    return 0;
    
}

int main(){
    int n;
    cin>>n;
    pri(n);
} 