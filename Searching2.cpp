//BINARY SEARCH
#include<iostream>
using namespace std;
int search(int N,int A[],int X){
    int b=0,e=N-1,m;
    while (b<=e) {
        m=(e+b)/2;
        if(A[m]<X) {
            b=m+1;
        }
        else if(A[m]>X){
            e=m-1;
        }
        else if(A[m]==X) {
            return m;
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

