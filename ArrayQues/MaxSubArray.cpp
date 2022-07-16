/* Max Sum among all subarrays
Enter no of elements5
Enter array 6 -4 8 3 -5
13
*/
#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n,s=0,m=INT_MIN;
    cout<<"Enter no of elements";
    cin>>n;
    int a[n-1];
    cout<<"Enter array ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        s+=a[i];
        if(s<0) {
            s=0;
        }
        m=max(m,s);
    }
    cout<<m;
    return 0;
}