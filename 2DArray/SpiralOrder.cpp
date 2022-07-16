/*
Enter rows and Columns8 8
Enter Array11 12 13 14 15 16 17 18
19 20 21 22 23 24 25 26
27 28 29 30 31 32 33 34
35 36 37 38 39 40 41 42
43 44 45 46 47 48 49 50
51 52 53 54 55 56 57 58
59 60 61 62 63 64 65 66
67 68 69 70 71 72 73 74
SpiralOrder = 
11 12 13 14 15 16 17 18 26 34 42 50 58 66 74 73 72 71 70 69 68 67 59 51 43 35 27 19 20 21 22 23 24 25 33 41 49 57 65 64 63 62 61 60 52 44 36 28 29 30 31 32 40 48 56 55 54 53 45 37 38 39 47 46 
*/
#include<iostream>
using namespace std;
int main() {
    int m,n;
    cout<<"Enter rows and Columns";
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter Array\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    cout<<"SpiralOrder = \n";
    int r=0,c=0,row=m-1,col=n-1;
    while(r<=row && c<=col) {
        //for r
        for(int i=c;i<=col;i++) {
            cout<<a[r][i]<<" ";
        }
        r++;
        //for col
        for(int i=r;i<=row;i++) {
            cout<<a[i][col]<<" ";
        }
        col--;
        //for row
        for(int i=col;i>=c;i--) {
            cout<<a[row][i]<<" ";
        }
        row--;
        for(int i=row;i>=r;i--) {
            cout<<a[i][c]<<" ";
        }
        c++;
    }
    return 0;
}