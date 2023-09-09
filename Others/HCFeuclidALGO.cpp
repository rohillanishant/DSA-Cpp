#include<iostream>
using namespace std;
int main() {
    int m,n,rem;
    cout<<"Enter 2 nos";
    cin>>m>>n;
    while(n!=0) {
        rem=m%n;
        m=n;
        n=rem;
    }
    cout<<"GCD is "<<m;
    return 0;
}