#include<iostream>
using namespace std;
bool check(int n,int a[]) {
    if(n==1) {
        return true;
    }
    bool rest=check(n-1,a+1);             //n-1 decrease size of array,a+1 start array with index 1 and changes index from 1 to 0 ,2 to 1........
    return(a[0]<a[1] && rest);           //0->unsorted  ,1->sorted
}
int main() {
    int n;
    cout<<"Enter no of elements ";
    cin>>n;
    int a[n];
    cout<<"enter array ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<check(n,a);
    return 0;
}