#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n; 

        int num;             
        int currentZero = 0;
        int maxZero = 0;   

        for (int i = 0; i < n; i++) {
            cin >> num;

            if (num == 0) {
                currentZero++;             
                if (currentZero > maxZero) {
                    maxZero = currentZero; 
                }
            } else {
                currentZero = 0; 
            }
        }

        cout << maxZero << endl; 
    }

    return 0;
}
