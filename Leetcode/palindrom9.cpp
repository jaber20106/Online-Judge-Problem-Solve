#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n < 0){
        cout << "false";
        return 0;
    }

    int temp = n;
    int sum = 0;

    while(temp != 0){
    int r = temp % 10;

    if (sum > (INT_MAX - r) / 10) {
        cout << "false";
        return 0;
    }

    sum = sum * 10 + r;
    temp = temp / 10;
}


    if(sum == n){
        cout << "true"<<endl;
    } else {
        cout << "false"<<endl;
    }

    return 0;
}
