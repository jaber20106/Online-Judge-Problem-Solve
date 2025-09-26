#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_set<int> st(v.begin(), v.end());

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (st.find(v[i] + 1) != st.end()) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
