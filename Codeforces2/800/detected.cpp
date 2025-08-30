#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        vector<int> a = arr;
        sort(a.begin(), a.end());

        int majority = a[1]; 

        for (int i = 0; i < n; i++){
            if(arr[i] != majority){
                cout << i + 1 <<endl;
                break; 
            }
        }
    }

    return 0;
}
