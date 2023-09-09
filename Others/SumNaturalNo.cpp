//SUM OF FIRST N NATURAL NO
#include<iostream>
using namespace std;
int sum(int n) {
    int s;
    s=n*(n+1)/2;
    return s;
}
int main() {
    int a;
    cout<<"Enter no";
    cin>>a;
    cout<<"Sum of first "<<a<<" Natural no's is = "<<sum(a);
    return 0;
}