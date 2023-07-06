#include<iostream>
using namespace std;
void reversePrint(int n){
    if(n>0){
        cout<<n%10<<" ";
        reversePrint(n/10);
    }
    return;
}
void print(int n){
    if(n>0){
        print(n/10);
        cout<<n%10<<" ";
    }
    return;
}
int main() {
    int n;
    cout<<"Enter no ";
    cin>>n;
    cout<<"Digits : ";
    print(n);
    cout<<"\nReverse Digits ";
    reversePrint(n);
    return 0;
}