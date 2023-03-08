// Linear Search an element from an array
#include<iostream>
using namespace std;
int search(int n,int a[],int x) {
    for(int i=0;i<n;i++) {
        if(x==a[i]) {
            return i;
        }
    }
    return -1;
}
int main() {
    int x,n;
    cout<<"Enter no of elements in array";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"Enter no to be searched";
    cin>>x;
    cout<<search(n,a,x);
    return 0;
}