/* Half Pyramid after 180 rotation
enter no5
        * 
      * *
    * * *
  * * * *
* * * * *
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter no";
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j<=n-i) {
                cout<<"  ";
            }else {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}

/* OTHER WAY
    int n;
    cout<<"ENTER NO";
    cin>>n;
    for (int i=n;i>=1;i--) {
        for(int j=1;j<=i-1;j++) {
            cout<<"  ";
        }
        for(int j=1;j<=n+1-i;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    */