#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    int countbig = 0;
    int countsmall = 0;
    int x = s.size();
    
    for(int i = 0; i < x; i++){
        if(isupper(s[i])){  
            countbig++;
        } 
        else{
            countsmall++;
        }
    }
    
    if(countbig > countsmall){
        for(int i = 0; i < x; i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i = 0; i < x; i++){
            s[i] = tolower(s[i]);
        }
    }
    
    cout << s <<endl;
    return 0;
}