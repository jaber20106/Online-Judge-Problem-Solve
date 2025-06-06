#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int pivot = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] < v[i + 1]) {
            pivot = i;
            break;
        }
    }

    if (pivot == -1) {
        reverse(v.begin(), v.end());
    } else {
        for (int i = n - 1; i > pivot; i--) {
            if (v[i] > v[pivot]) {
                swap(v[i], v[pivot]);
                break;
            }
        }
        reverse(v.begin() + pivot + 1, v.end());
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
