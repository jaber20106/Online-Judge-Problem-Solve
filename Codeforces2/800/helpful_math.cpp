#include <iostream>
#include <algorithm> // reverse() function এর জন্য
using namespace std;

int main() {
    string expr;
    cin >> expr;
    sort(expr.begin(),expr.end());

    reverse(expr.begin(), expr.end());

    cout<< expr<< endl;

    return 0;
}
