#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
            int n;
    string s;
    cin >> n >> s;

    int count = 0;
    bool flag = false;

    for (char c : s) {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            count = 0;
        } else {
            count++; 
        }

        if (count >= 4) {
            flag = true;
            break;
        }
    }

    if (flag) cout << "NO\n";
    else cout << "YES\n"; 

    }

    return 0;
}
