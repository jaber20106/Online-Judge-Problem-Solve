#include <bits/stdc++.h>
using namespace std;

//Brute-force (O(n^2))
bool myLogic(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                return true;
            }
        }
    }
    return false;
}
//Optimized with sorting (O(n log n))
bool optimizedLogic(vector<int>& v) {
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            return true;
        }
    }
    return false;
}
// printing result using logic function
void print(vector<int>& v) {
    if (optimizedLogic(v)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    optimizedLogic(v);
    print(v);

    return 0;
}
