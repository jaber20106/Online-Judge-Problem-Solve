#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ematch = 0, omatch = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0) ematch++;
                else omatch++;
            }
        }

        if (ematch != omatch) cout << -1 << "\n";
        else cout << ematch << endl;
    }
}
