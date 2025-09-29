#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    while (q--){
        int x;
        cin >> x;
        int lo = 0, hi = n - 1;
        bool found = false;

        while (lo <= hi){
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] == x){
                found = true;
                break;
            }
            else if (arr[mid] > x){
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }

        if (found) cout << "found"<<endl;
        else cout << "not found"<<endl;
    }

    return 0;
}
