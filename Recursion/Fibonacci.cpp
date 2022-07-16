#include<iostream>
using namespace std;
int arr[100];               //to avoid excessive recursion
int fib(int n) {
    if(arr[n]!=-1) {
        return arr[n];
    }
    if(n==0 || n==1) {
        arr[n]=n;
        return n;
    }
    arr[n]=fib(n-1)+fib(n-2);
    return arr[n];
}
int main() {
    int n;
    cout<<"Enter no ";
    cin>>n;
    for(int i=0;i<101;i++) {
        arr[i]=-1;
    }
    cout<<n<<"th Fibonacci no is "<<fib(n);
}
/*   EXCESSIVE RECURSION    
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
*/