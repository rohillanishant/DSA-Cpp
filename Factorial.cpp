//FACTORIAL
#include<iostream>
using namespace std;
int facto(int no) {
    int fac=1;
    for(int i=1;i<=no;i++) {
        fac=fac*i;
    }
    return fac;
}
int main() {
    int n;
    cout<<"Enter no";
    cin>>n;
    cout<<facto(n);
    return 0;
}