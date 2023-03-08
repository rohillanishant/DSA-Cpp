//BUBBLE SORT
#include<iostream>
using namespace std;
void sort(int n,int a[]) {
    for(int j=1;j<n;j++) {
        bool swapped=false;
        for(int i=0;i<n-j;i++) {
            if(a[i]>a[i+1]) {
                swapped=true;
            int x;
            x=a[i];         
            a[i]=a[i+1];
            a[i+1]=x;
            }
        }
        if(swapped==false){                         //already sorted because no swapping happened
            break;                  
        }
    }
    cout<<"\n SORTED ARRAY = ";
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