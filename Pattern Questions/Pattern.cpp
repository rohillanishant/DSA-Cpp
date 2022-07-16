/* RECTANGLE 
ENTER LENGTH & BREADTH5
4
* * * * * 
* * * * *
* * * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main() {
    int n,m;                           //LENGTH & BREADTH
    cout<<"ENTER LENGTH & BREADTH";
    cin>>n>>m;
    for(int i=1;i<=m;i++) {
        for(int j=1;j<=n;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}