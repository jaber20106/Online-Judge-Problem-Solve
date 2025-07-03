#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        int y = s[i] - '0';
        int inverted = 9 - y;
        
        if (i == 0 && y == 9) {
            cout << y;
        }
        else {
            cout << min(y, inverted);
        }
    }

    return 0;
}
