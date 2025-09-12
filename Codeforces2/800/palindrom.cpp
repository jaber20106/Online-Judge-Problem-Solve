#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    string rev = N;
    reverse(rev.begin(), rev.end());

    cout << stoi(rev) << "\n";

    if (N == rev) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
