#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> p(n);
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }

    // sort descending
    sort(p.rbegin(), p.rend());

    // prefix sum in same vector
    for (int i = 1; i < n; i++) {
        p[i] += p[i-1];
    }

    while (q--) {
        int x, y;
        cin >> x >> y;

        long long ans;
        if (x == y) {
            ans = p[x-1]; 
        } else {
            ans = p[x-1] - p[x-y-1];
        }
        cout << ans << endl;
    }

    return 0;
}
