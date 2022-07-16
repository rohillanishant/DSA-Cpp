//COMBINATION--> nCr= n!/ r!(n-r)!
#include<iostream>
using namespace std;
int C(int n,int r) {
    if(r==0 || n==r) {
        return 1;
    }
    return C(n-1,r-1) + C(n-1,r);   //nCr= (n-1)C(r-1) + (n-1)Cr 
}
int main() {
    int n,r;
    cout<<"Enter n and r";
    cin>>n>>r;
    cout<<n<<"C"<<r<<" = "<<C(n,r);
    return 0;
}
/* Other method ,but better is above one
int C (int n,int r) {
    int num,den;
    num=fact(n);         //fact is another function must be created for factorial
    den=fact(r)*fact(n-r);
    return num/den;
}
*/