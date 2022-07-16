/* Smallest +ve Missing no                                    (Amazon/Samsung/Snapdeal/Accoute)
Enter no of elements4
Enter  elements4 -6 1 3
2
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    const int m=1e6+2;                                        //10 raise to power 6 +2
    cout<<"Enter no of elements";
    cin>>n;
    int a[n];
    bool b[m];
     cout<<"Enter  elements";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<m;i++) {
        b[i]=false;
    }
    for(int i=0;i<n;i++) {
        if(a[i]>=0) {
            b[a[i]]=true;
        }
    }
    for(int i=1;i<m;i++) {
        if(b[i]==false) {
            cout<<i;
            break;
        }
    }
    return 0;
}