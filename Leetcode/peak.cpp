#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    auto it = max_element(v.begin(), v.end());
    int mx = *it;
    int index = it - v.begin();

    cout << index<< endl;

    return 0;
}
