#include<iostream>
using namespace std;
long fastExponent(int a,int b){
    long ans=1;
    while(b>0){
        if(b&1){
            ans=ans*a;
        }
        a=a*a;
        b=b>>1;
    }
    return ans;
}
int main() {
    int a,b;
    cout<<"Enter no ";
    cin>>a;
    cout<<"Enter power ";
    cin>>b;
    cout<<"Answer is "<<fastExponent(a,b);
    return 0;
}