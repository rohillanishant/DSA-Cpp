// OCTAL TO DECIMAL
#include<iostream>
#include<math.h>
using namespace std;
int convert(int n) {
    int x,ans=0,i=0;
    while(n>0) {
        x=n%10;
        ans=ans + x*pow(8,i);
        i++;
        n=n/10;
    }
    return ans;
}
int main() {
    int a;
    cout<<"Enter Octal no";
    cin>>a;
    cout<<convert(a);
    return 0;
}