#include<iostream>
#include<cmath>
using namespace std;

void primeNum(int n) {
    if (n <= 1) {
        cout << "NO" << endl;
        return;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        primeNum(n);
    }

    return 0;
}
