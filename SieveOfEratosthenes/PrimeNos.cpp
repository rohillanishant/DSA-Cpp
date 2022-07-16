#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter no";
    cin>>n;
    bool arr[n];
    for(int i=0;i<=n;i++) {
        arr[i]=false;
    }
    for(int i=2;i<=n;i++) {
        if(!arr[i]) {
            for(int j=i*i;j<=n;j+=i) {
                arr[j]=true;
            }
        }
    }
    cout<<"Prime no are : ";
    for(int i=2;i<=n;i++) {
        if(!arr[i]) {
            cout<<i<<" ";
        }
    }
    return 0;
}