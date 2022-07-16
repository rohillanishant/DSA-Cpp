/*SubArray with Given Sum                       FB,AMAZON,VISA,GOOGLE
Enter no of elements8
Enter array  2 5 2 6 4 9 7 3 
enter Sum7
1 to 2
2 to 3
7 to 7 
*/
#include<iostream>
using namespace std;
int main() {
    int n,s,x;
    cout<<"Enter no of elements";
    cin>>n;
    int a[n-1];
    cout<<"Enter array ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"enter Sum";
    cin>>s;
    for(int i=0;i<n;i++) {
        x=0;
        for(int j=i;j<n;j++) {
            x+=a[j];
            if(x==s) {
                cout<<i+1<<" to "<<j+1<<endl;
            }
        }
    }
    return 0;
}