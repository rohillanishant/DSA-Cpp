/* Butterfly Pattern
ENTER N4
*             * 
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/
#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"ENTER N";
    cin>>n;
    for (i=1;i<=n;i++) {
        for(j=1;j<=2*n;j++) {
            if(j>i && j<=(2*n-i)){
            cout<<"  ";}
            else if(j<=i || j>(2*n-i)) {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for (i=n;i>=1;i--) {
        for(j=1;j<=2*n;j++) {
            if(j>i && j<=(2*n-i)){
            cout<<"  ";}
            else if(j<=i || j>(2*n-i)) {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
Other Way:-
for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
        cout<<"* ";
    }
    int space=2*n-2*i;
    for(int j=1;j<=space;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++) {
        cout<<"* ";
    }
    cout<<endl;
}
for(int i=n;i>=1;i--) {
    for(int j=1;j<=i;j++) {
        cout<<"* ";
    }
    int space=2*n-2*i;
    for(int j=1;j<=space;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++) {
        cout<<"* ";
    }
    cout<<endl;
}
*/