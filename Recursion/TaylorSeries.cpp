//TAYLOR SERIES ----> e^x= 1+ x/1 + x^2/2! + x^3/3! + x^4/4! .................. x^n/n!
#include<iostream>
using namespace std;
double e(int x,int n) {
    static int s=1;
    if(n==0) {
        return s;
    }
    s=1+x/n*s;              //HORNER RULE---> e^x= 1+x/1[1+x/2[1+x/3[1+x/4.......[1+x/n]]]]   it will be easy
    return e(x,n-1);
}
int main() {
    int n,x;
    cout<<"enter x and n ";
    cin>>x>>n;
    cout<<e(x,n);
    return 0;
}
/* Without HORNER RULE 
double e (int x,int n) {
    static double p=1,f=1;
    double r;
    if(n==0) {
        return 1;
    }
    r=e(x,n-1);
    p=p*x;     //for power
    f=f*n;     //for factorial
    return r+ p/f;
}
*/