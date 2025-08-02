#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    set<int> st;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }

   
    if (st.size() < 2){
        cout << "NO" << endl;
        return 0;
    }

    int ans = 0;
    for(auto it : st){
        if(ans == 1){
            cout << it << endl;
            break;
        }
        ans++;
    }

    return 0;
}
