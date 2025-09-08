#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int zeros = 0, ones = 0, twos = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) zeros++;
            else if (a[i] == 1) ones++;
            else twos++;
        }
        vector<int> arranged;
        for (int i = 0; i < zeros; i++) arranged.push_back(0);
        for (int i = 0; i < ones; i++) arranged.push_back(1);
        for (int i = 0; i < twos; i++) arranged.push_back(2);
        int min_sum = 0;
        for (int i = 0; i < n; i++) min_sum += arranged[i];
        int max_sum = min_sum + 2 * (n - 1); // Example of maximum by backtracking
        if (s < min_sum || s > max_sum) {
            for (int i = 0; i < n; i++) {
                if (i > 0) cout << " ";
                cout << arranged[i];
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}