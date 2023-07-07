#include<iostream>
using namespace std;
bool isSorted(int a[],int i,int &n){
    if(i==n-1){
        return true;
    }
    if(a[i]<=a[i+1]){
        return isSorted(a,i+1,n);
    }
    return false;
}
int main() {
    int a[]={4,3,1,2,4,4,5};
    int n=7;
    if(isSorted(a,0,n)){
        cout<<"Array is Sorted";
    }else{
        cout<<"Array is not sorted";
    }
    return 0;
}