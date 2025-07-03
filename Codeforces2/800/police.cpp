#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unrated = 0;
    int officer = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            officer += arr[i];
        } 
        else if (arr[i] == -1) {
            if (officer > 0) {
                officer--;
            } else {
                unrated++;
            }
        }
    }

    cout << unrated << endl;
    return 0;
}
