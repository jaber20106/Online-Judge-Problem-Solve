#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        int sum = 0;
        bool liar = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        // Rule 1: Sum of winners must not exceed n - 1
        if (sum > n - 1) liar = true;

        // Rule 2: No two adjacent 0s are allowed
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 0 && a[i+1] == 0) {
                liar = true;
                break;
            }
        }

        cout << (liar ? "YES" : "NO") << '\n';
    }
    return 0;
}
