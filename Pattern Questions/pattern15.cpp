/*
       *           *       
    *     *     *     *
 *           *           *
    *     *     *     *
       *           *
    *     *     *     *
 *           *           *
    *     *     *     *
    */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER NO of rows";
    cin>>n;                                                                        //ROWS
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=9;j++) {
            if((i%2!=0 && (i+j)%4==0)  || (i%2==0 && (i+j)%2==0)) {
               cout<<" * ";
           }
           else {
               cout<<"   ";
           } 
        }
        cout<<endl;
    }
    return 0;
}
