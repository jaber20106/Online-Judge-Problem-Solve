#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w1, w2, x1, x2, M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;

        int minWeight = w1 + x1 * M;
        int maxWeight = w1 + x2 * M;

        if (w2 >= minWeight && w2 <= maxWeight)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
