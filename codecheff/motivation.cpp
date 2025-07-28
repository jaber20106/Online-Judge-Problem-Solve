#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, x;
        cin >> n >> x;

        int maxRating = 0;

        for (int i = 0; i < n; i++) {
            int s, r;
            cin >> s >> r;

            if (s <= x) {
                maxRating = max(maxRating, r);
            }
        }

        cout << maxRating << endl;
    }

    return 0;
}
