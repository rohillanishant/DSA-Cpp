/*Enter no of elements10
Enter array1 4 2 5 3 4 6 4 5 1      
enter element to be searched5
first =3
last=8*/
#include<iostream>
using namespace std;
int first(int n,int a[],int key,int i) {
    if(i==n){
        return -1;
    }
    if(a[i]==key) {
        return i;
    }
    return first(n,a,key,i+1);
}
int last(int n,int a[],int key,int i) {
    /*if(i==-1) {                         //this method is also correct
        return -1;
    }
    if(a[i]==key) {
        return i;
    }
    return last(n,a,key,i-1);*/
    if(i==n) {
        return -1;
    }
    int rest=last(n,a,key,i+1);
    if(rest!=-1) {
        return rest;
    }
    if(a[i]==key) {
        return i;
    }
    return -1;
}
int main() {
    int n,key;
    cout<<"Enter no of elements";
    cin>>n;
    int a[n];
    cout<<"Enter array";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"enter element to be searched";
    cin>>key;
    cout<<"first = ";
    cout<<first(n,a,key,0);
    cout<<"\nlast = "<<last(n,a,key,0);
    return 0;
}