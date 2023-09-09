/* Pascal Triangle
Enter no6
1 
1 1 
1 2 1         
1 3 3 1       
1 4 6 4 1     
1 5 10 10 5 1 
*/
#include<iostream>
using namespace std;
int facto(int no) {
    int fac=1;
    for(int i=1;i<=no;i++) {
        fac=fac*i;
    }
    return fac;
}
int main() {
    int n;
    cout<<"Enter no";
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<facto(i)/(facto(j)*facto(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}