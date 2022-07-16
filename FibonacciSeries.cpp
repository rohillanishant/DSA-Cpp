// FIBONACCI SERIES :- 0,1,1,2,3,5,8.......
#include<iostream>
using namespace std;
void Series(int no) {
    int a[20];
    a[0]=0;
    a[1]=1;
    cout<<a[0]<<" "<<a[1]<<" ";
    for(int i=2;i<=no;i++) {
        a[i]=a[i-1] + a[i-2];
        cout<<a[i]<<" ";
    }
}
int main() {
    int n;
    cout<<"Enter no of terms";
    cin>>n;
    Series(n);
}