/* Given an array of size n ,for every i=0 to n-1 ,we will find max of all elements before a[i]
Enter no of elements in array6
Enter elements1 0 5 4 6 8
MAX NO TILL i= 0 is 1
MAX NO TILL i= 1 is 1
MAX NO TILL i= 2 is 5
MAX NO TILL i= 3 is 5
MAX NO TILL i= 4 is 6
MAX NO TILL i= 5 is 8
*/
#include<iostream>
#include<climits>
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
    int mx=INT_MIN;
    for(int i=0;i<n;i++) {
        mx=max(mx,a[i]);                                                  
        cout<<"MAX NO TILL i= "<<i<<" is "<<mx<<"\n";
    }
    return 0;
}