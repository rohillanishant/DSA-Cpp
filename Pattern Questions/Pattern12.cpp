/* Palindromic Pattern 
ENTER NO5
        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER NO";
    cin>>n;
  for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/* Other Way
 for(int i=1;i<=n;i++) {
     int j;
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++){                         IT MEANS VALUE OF j WILL START FROM WHERE IT ENDED i.e j=n-i
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i;j++) {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
 */