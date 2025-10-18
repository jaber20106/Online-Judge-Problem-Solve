#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        if (x + y == z || x + z == y || y + z == x)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
