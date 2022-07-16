/* Zig Zag Pattern 
        *           *           *           *
    *     *     *     *     *     *     *     *     *
 *           *           *           *           *
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER NO of stars ";
    cin>>n;                       //NO OF STARS *
    for(int i=1;i<=3;i++) {
        for(int j=1;j<=n;j++) {
           if((i%2!=0 && (i+j)%4==0)  || (i%2==0 && (i+j)%2==0)) {                 // if((i+j)%4==0 || (i=2 && j%4==0) )
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
