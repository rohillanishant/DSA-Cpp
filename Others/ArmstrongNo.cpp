#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,i,sum=0;
    cout<<"Enter no ";
    cin>>n;
    int x=n;
    while(n>0) {
        i=n%10;
        sum+=pow(i,3);
        n=n/10;
    }
    if(sum==x) {
        cout<<"It is Armstrong no";
    }
    else {
        cout<<"It is not an Armstrong no";
    }
    return 0;
}