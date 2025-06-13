#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    int count = 0;
    int x = s.size();
    for(int i = 0; i < x; i++){
        char digit = s[i];
        if(digit == '4' || digit == '7'){
            count++;
        }
    }
    if (count == 4 || count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}