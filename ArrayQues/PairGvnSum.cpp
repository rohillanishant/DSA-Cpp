/*PAIR OF ELEMENTS WHOSE SUM = GIVEN SUM (IF ARRAY IS SORTED,if not then we have to sort it first)
Enter no of elements4
 Enter array 1 2 3 4
Enter Sum3
0 & 1
Enter no of elements5
Enter array 1 4 8 9 13
Enter Sum10
0 & 3
*/
#include<iostream>
using namespace std;
int main() {
    int n,k;
    cout<<"Enter no of elements";
    cin>>n;
    int a[n-1];
    cout<<"Enter array ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"Enter Sum";
    cin>>k;
    int i=0,j=n-1;
    while(i<j) {
        if(a[i]+ a[j]==k) {
            cout<<i<<" & "<<j<<endl;
            return 0;
        }
        else if(a[i] +a[j]<k) {
            i++;
        }
        else if (a[i]+a[j]>k) {
            j--;
        }
    }
    return 0;
}