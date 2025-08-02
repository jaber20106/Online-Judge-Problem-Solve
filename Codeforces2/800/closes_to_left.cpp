#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (k--) {
        int x;
        cin >> x;

        int low = 0,high = n - 1;
        int res = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (a[mid] <= x) {
                res = mid;
                low = mid + 1;
            }else {
                high = mid - 1;
            }
        }

        if(res == -1){
            cout << 0 << endl;
        }
        else{
            cout<<res + 1<< endl; 
        }
    }

    return 0;
}
