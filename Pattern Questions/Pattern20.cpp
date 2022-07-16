/*  Hollow Diamond
ENTER NO 5
    *    
   * *   
  *   *  
 *     * 
*       *
*       *
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER NO ";                              //NO OF ROWS = 2n
    cin>>n;
    for(int i=n;i>=1;i--) {
        for(int j=1;j<=2*n-1;j++) {
            if(j==i || j==2*n-i) {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=2*n-1;j++) {
            if(j==i || j==2*n-i) {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
}
          return 0;
}