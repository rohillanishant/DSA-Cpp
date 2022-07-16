/* Max Sum among all CIRCULAR SUBARRAYS
Enter no of elements7
Enter array 4 -4 6 -6 10 -11 12
22
*/
#include<iostream>
#include<climits>
using namespace std;
int nonwrap(int a[],int n) {
        int s=0,m=INT_MIN;
        for(int i=0;i<n;i++) {
        s+=a[i];
        if(s<0) {
            s=0;
        }
        m=max(m,s);
    }
    return m;
}
int main() {
    int n;
    cout<<"Enter no of elements";
    cin>>n;
    int a[n-1];
    cout<<"Enter array ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int wrapsum,nonwrapsum,totalsum=0;                        //wrap- CIRCULAR
    nonwrapsum=nonwrap(a,n);
    for(int i=0;i<n;i++) {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=totalsum+nonwrap(a,n);
    cout<<max(wrapsum,nonwrapsum);
    return 0;
}