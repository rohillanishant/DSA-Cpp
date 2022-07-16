/* Rhombus Pattern
     * * * * * 
    * * * * *
   * * * * *
  * * * * *
 * * * * *
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER N";
    cin>>n;
    for(int i=n;i>=1;i--) {
        for(int j=1;j<=i-1;j++) {
            cout<<" ";
        }
        for(int j=1;j<=n;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
/* Other Way
for(int i=1;i<=n;i++) {
    for(int j=1;j<n-1;j++) {
        cout<<" ";
    }
    for(int j=1;j<=n;j++) {
        cout<<"* ";
    }
    cout<<endl;
} 
*/