/*FIRST REPEATING ELEMENT
ASKED IN AMAZON/ORACLE
WE HAVE TO FIND THE ELEMENT WHICH IS REPEATING AND HAVE SMALLEST INDEX AMONG REPEATING ONE'S
OUTPUT:-Enter no of elements in array5
        Enter array5 8 2 2 5
        ans=1
*/
#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    int x=INT_MAX; 
    int m=99999;
    int b[m]; 
    cout<<"Enter no of elements in array";
    cin>>n;
    int a[n];
    cout<<"Enter array";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<m;i++) {
        b[i]=-1;
    }
    for(int i=0;i<n;i++) {
        if(b[a[i]] != -1) {
            x=min(x,b[a[i]]);
        }
        else {
            b[a[i]]=i;
        }
    }
    if(x==INT_MAX) {
        cout<<"-1";
    }
    else {
        cout<<"ans="<<x+1;
    }
    return 0;
}