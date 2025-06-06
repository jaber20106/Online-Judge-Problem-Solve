#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        
      int n, x;
      cin >> n >> x;
      vector<int> a(n);
      int sum = 0;
      for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
      }
      if (sum == x * n)
        cout << "YES\n";
      else
        cout << "NO\n";
}

}