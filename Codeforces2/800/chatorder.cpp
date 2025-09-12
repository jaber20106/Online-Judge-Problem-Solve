#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    set<string> st;
    for (int i = n - 1; i >= 0; i--) {
        if (st.count(s[i])) continue;
        cout << s[i] <<endl;
        st.insert(s[i]);
    }
}
