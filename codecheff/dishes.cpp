#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, s;
        cin >> n >> s;

        int ans = min(s, 2 * n - s);
        cout << ans << endl;
    }

    return 0;
}
