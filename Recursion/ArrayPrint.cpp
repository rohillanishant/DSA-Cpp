#include<iostream>
using namespace std;
void print(int arr[],int n){
    if(n==0){
        return;
    }
    cout<<arr[0]<<" ";
    print(arr+1,n-1);
    
}
int main() {
    int arr[]={4,2,4,54,8};
    print(arr,5);
    return 0;
}