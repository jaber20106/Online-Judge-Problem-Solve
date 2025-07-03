#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<pair<string, string>> leaves;

    while (n--) {
        string tree, color;
        cin >> tree >> color;
        leaves.insert({tree, color});
    }

    cout << leaves.size() << endl;
    return 0;
}
