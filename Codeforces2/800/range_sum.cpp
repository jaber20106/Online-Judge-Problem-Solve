#include <bits/stdc++.h>
using namespace std;

long long sumUpto(long long n) {
    return n * (n + 1) / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        cout << sumUpto(b) - sumUpto(a - 1) << endl;
    }
    return 0;
}
