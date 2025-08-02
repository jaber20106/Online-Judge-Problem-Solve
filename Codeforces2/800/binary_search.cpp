#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  // sorted array
    }

    while (k--) {
        int x;
        cin >> x;

        
        int low = 0, high = n - 1;
        bool found = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if(a[mid] == x){
                found = 1;
                break;
            }
            else if(a[mid] < x) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        if (found == 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
