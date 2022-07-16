/*MULTIPLICATION OF 2 MATRIX
OUTPUT:-
1)  Enter row and col of 1st array 2 3
Enter 1st Array
1 2 3
4 5 6
enter row and col of 2nd array3 2
Enter 2nd Array = 
1 2
3 4
5 6
Ans = 
22 28 
49 64 
2)  Enter row and col of 1st array 3 2
Enter 1st Array
1 2  
3 4
5 6
enter row and col of 2nd array3 2
Can not be multiplied 
*/
#include<iostream>
using namespace std;
int main() {
    int m,n,o,p,k=0;
    cout<<"Enter row and col of 1st array ";
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter 1st Array\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    cout<<"enter row and col of 2nd array";
    cin>>o>>p;
    int b[o][p],c[m][p];
    if(n!=o) {
        cout<<"Can not be multiplied ";
        return 0;
    }
    else if (n==o) {
        cout<<"Enter 2nd Array = \n";
        for(int i=0;i<o;i++) {
            for(int j=0;j<p;j++) {
                cin>>b[i][j];
            }
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<p;j++) {
                c[i][j]=0;
            }
        }
        cout<<"Ans = \n";
        for(int i=0;i<m;i++) {
            for(int j=0;j<p;j++) {
                k=0;
                while(k<n) {
                    c[i][j]+=a[i][k]*b[k][j];
                    k++;
                }
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
