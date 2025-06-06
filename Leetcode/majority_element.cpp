#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        int val = nums[i];
        int freq = 0;

        for (int j = 0; j < n; j++) {
            if (nums[j] == val) {
                freq++;
            }
        }

        if (freq > n / 2) {
            cout << "Majority Element: " << val << endl;
            return 0;
        }
    }

    cout << "No Majority Element Found." << endl;
    return 0;
}
