#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int minIndex = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] < arr[minIndex]){
                minIndex = i;
            }
        }

        arr[minIndex]++;

        int ans = 1;
        for(int i = 0; i < n; i++){
            ans *= arr[i];
        }

        cout << ans << endl;
    }
}
