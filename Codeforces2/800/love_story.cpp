#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, c = "codeforces";
    cin >> s;
    int ans = 0;
    for(int i = 0; i < 10; i++)
    {
        if(s[i] != c[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}