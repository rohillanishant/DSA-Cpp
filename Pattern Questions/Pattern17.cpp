/* Hollow Diamond Inscribed in a Rectangle
ENTER NO5
*********
**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****
*********
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER NO";                                  //No of rows=2n
    cin>>n;
    int k=0;
    for(int i=n;i>=1;i--) {
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        for(int j=1;j<=k;j++) {
            cout<<" ";
        }
        for(int j=i;j>=1;j--) {
            if(j==n){
                for(int x=1;x<=j-1;x++) {
                cout<<"*";}
                break;
                }
                else {
                   cout<<"*";
                }
                 }
        if(k==0) {
            k=1;
        }
        else{
            k=k+2;
        }
        cout<<endl;
    }
    k=k-2;
       for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=k;j++) {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) {
            if(i==n) {
                for(int x=1;x<=n-1;x++) {
                cout<<"*";}
                break;
            }
            cout<<"*";
         }
        if(k==1) {
            k=0;
        }
        else{
            k=k-2;
        }
        cout<<endl;
    }
    return 0;
}