#include<bits/stdc++.h>
using namespace std;
bool check (int a,int b,int c) {
    if((a*a==b*b + c*c) || (b*b==a*a + c*c) || (c*c==a*a +b*b)) {
        return true;
    }
        return false;
}
int32_t main() {
    int x,y,z;
    cout<<"Enter no's \n";
    cin>>x>>y>>z;
    if(check(x,y,z)) {
        cout<<"PYTHAGORIAN TRIPLET";
    }
    else {
        cout<<"Non Pythagorian Triplet";
    }
    return 0;
}