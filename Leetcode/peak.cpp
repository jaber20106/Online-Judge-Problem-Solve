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
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int maxValue = arr[0];
//     int maxIndex = 0;

//     for(int i = 1; i < n; i++) {
//         if(arr[i] > maxValue) {
//             maxValue = arr[i];    
//             maxIndex = i; 
//         }
//     }

//     cout << maxIndex << endl;

//     return 0;
// }
