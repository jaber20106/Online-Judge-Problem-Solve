#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, s1;
        cin >> s >> s1;
        string result = "";

        for (int i = 0; i < 5; i++) {
            if (s[i] == s1[i]) {
                result += 'G';
            } else {
                result += 'B';
            }
        }
        cout << result << endl;
    }

    return 0;
}
