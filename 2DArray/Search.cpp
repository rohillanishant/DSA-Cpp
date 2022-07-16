/*    Searching a no from matrix
Enter rows & columns 3 3
Enter matrix1 2 3
4 5 6
7 8 9
Enter no to be searched 4
no found at 1 , 0
*/
#include<iostream>
using namespace std;
int main() {
    int m,n,x;
    cout<<"Enter rows & columns ";
    cin>>m>>n;
    cout<<"Enter matrix";
    int a[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    cout<<"Enter no to be searched ";
    cin>>x;
    int r=0,c=m-1;
    while(r<n and c>=0){
        if(a[r][c]==x) {
            cout<<"no found at "<<r<<" , "<<c;
            return 0;
        }
        else if (a[r][c]<x) {
            r++;
        }
        else {
            c--;
        }
    }
    cout<<"No not found";
    return 0;
}