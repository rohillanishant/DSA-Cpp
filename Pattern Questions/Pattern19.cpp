/* HOLLOW BUTTERFLY PATTERN
ENTER NO 5
*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER NO";                                                //No of rows=no of column=2n
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=2*n;j++) {
            if(j==1 || j==2*n || j==i || j==2*n+1-i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
       for(int i=n;i>=1;i--) {
        for(int j=1;j<=2*n;j++) {
            if(j==1 || j==2*n || j==i || j==2*n+1-i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}