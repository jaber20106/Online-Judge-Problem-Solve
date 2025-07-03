#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Case 1: If k == 1 → Only possible if already sorted
        if(k == 1) {
            if(is_sorted(a.begin(), a.end())) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
        // Case 2: If k >= n or k >= 2 → Always possible
        else {
            cout << "YES\n";
        }
    }

    return 0;
}
