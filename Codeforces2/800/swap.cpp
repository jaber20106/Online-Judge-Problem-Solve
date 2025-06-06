#include<iostream>
using namespace std;
void swaping(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int a,b;
    cin>>a>>b;
    swaping(a,b);
}