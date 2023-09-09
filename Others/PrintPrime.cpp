// PRINT ALL PRIME NO's B/W 2 GIVEN NO's
#include<iostream>
#include<math.h>
using namespace std;
bool IsPrime(int n) {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
            return false;                           //go out of the loop
        }
    }
    return true;
}
int main() {
    int a,b;
    cout<<"Enter 2 nos";
    cin>>a>>b;
    for(int i=a;i<=b;i++) {
        if(IsPrime(i)) {
            cout<<i<<" ";
        }
    }
    return 0;
}