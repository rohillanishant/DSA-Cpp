/* Hollow Rectangle
* * * * 
*     * 
*     * 
*     * 
* * * * 
*/
#include<iostream>
using namespace std;
int main() {
    int n,m;                                      //LENGTH & BREADTH  
    cout<<"ENTER LENGTH & BREADTH";
    cin>>n>>m;                                                        
    for(int i=1;i<=m;i++) {
        for(int j=1;j<=n;j++) {
            if((i>1 && i<m) && (j>1 && j<n)) {
                cout<<"  ";
                continue;
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}