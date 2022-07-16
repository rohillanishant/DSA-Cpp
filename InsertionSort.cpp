//INSERTION SORT
#include<iostream>
using namespace std;
void sort(int n,int a[]) {
    for(int i=1;i<n;i++) {
        int c=a[i];
        int j=i-1;
        while(a[j]>c && j>=0) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1] =c;
    }
    cout<<"Sorted array= ";
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}
int main() {
    int n;
    cout<<"Enter no of elements in array";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(n,a);
    return 0;
}