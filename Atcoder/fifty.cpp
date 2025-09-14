#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    bool flag = true;

    if (freq.size() == 2) {
        for (auto it : freq) {
            if (it.second != 2) {
                flag = false;
                break;
            }
        }
    }
    else {
        flag = false; 
    }

    if (flag) cout << "Yes"<<endl;
    else cout << "No"<<endl;

    return 0;
}
