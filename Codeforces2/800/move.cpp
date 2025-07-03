#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        string s; 
        cin >> s;

        pair<int,int> alice = {0, 0}, queen = {a, b};
        bool found = false;

        for(int i = 0; i < 1000; i++){
            if(alice == queen){
                found = true;
                break;
            }

            char move = s[i % n];
            if(move == 'N') alice.second++;
            else if(move == 'S') alice.second--;
            else if(move == 'E') alice.first++;
            else if(move == 'W') alice.first--;
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}
