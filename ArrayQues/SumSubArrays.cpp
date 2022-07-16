/*Sum of each Subarray formed
Enter no of elements in array3
Enter elements1 2 2
s=1
s=3
s=5
s=2
s=4
s=2
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter no of elements in array";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        int s=0;
        for(int j=i;j<n;j++) {
            s=s+a[j];
            cout<<"s="<<s<<endl;
        }
    }
    return 0;
}