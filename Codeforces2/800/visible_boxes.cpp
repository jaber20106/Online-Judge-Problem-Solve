#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> freq;

    for (int x : a) {
        freq[x]++;
    }
    int ans = 0;
    for (auto it : freq) {
        ans = max(ans, it.second);
    }

    cout << ans << endl;

    return 0;
}
