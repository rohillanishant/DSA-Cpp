/* TRANSPOSE OF A MATRIX
Enter n3
Enter Array
1 2 3
4 5 6
7 8 9
Transpose = 
1 4 7       
2 5 8       
3 6 9     */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n";
    cin>>n;
    int a[n][n];
    cout<<"Enter Array\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    cout<<"Transpose = \n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
