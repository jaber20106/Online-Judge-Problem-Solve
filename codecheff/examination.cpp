#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int d, e, f;
        cin >> d >> e >> f; 

        int x = a + b + c; 
        int y = d + e + f; 

        if (x > y) {
            cout << "DRAGON" << endl;
        }
        else if (x < y) {
            cout << "SLOTH" << endl;
        }
        else { 
            if (a > d) cout << "DRAGON" << endl;   //DSA compare
            else if (a < d) cout << "SLOTH" << endl;
            else if (b > e) cout << "DRAGON" << endl;  //TOC compare
            else if (b < e) cout << "SLOTH" << endl;
            else if (c > f) cout << "DRAGON" << endl; //DM compare
            else if (c < f) cout << "SLOTH" << endl;
            else cout << "TIE" << endl;               
        }
    }

    return 0;
}
