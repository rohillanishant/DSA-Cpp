/* CALCULATE COMBINATION i.e. n          n!
                               C =  -------------
                                r    (n-r)! X r!
*/
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
    int n,r;
    cout<<"Enter n and r";
    cin>>n>>r;
    float c= facto(n)/(facto(r)*facto(n-r));
    cout<<c;
    return 0;
}