/* PASCAL'S TRIANGLE 
ENTER NO 8
                  1   
                1   1
              1   2   1
            1   3   3   1
          1   4   6   4   1
        1   5   10   10   5   1
      1   6   15   20   15   6   1
    1   7   21   35   35   21   7   1 
*/
#include<iostream>
using namespace std;
int main() {
    int n,c=1;
    cout<<"ENTER NO ";                                      //No of rows
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=n-i;j++) {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            if(i==0 || j==0) {
                c=1;
            }
            else {
                c=c*(i-j+1)/j;
            }
            cout<<c<<"   ";
        }
        cout<<endl;
    }
    return 0;
}