/* LENGTH OF LONGEST ARITHMETIC SUBARRAY i.e DIFFERENCE OF CONSECUTIVE ELEMENTS ARE SAME
 Ex :- [3,3,3], [9,7,5,3] are ARITHMETIC SUBARRAYS
       whereas [1,3,3,7] , [1,2,4] are not
 OUTPUT-
 Enter no of elements in array10
Enter elements 1 1 1 1 2 3 5 6 8 9 
length of longest arithmetic subarray= 4
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
    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;
    while(j<n) {
        if(pd==a[j]-a[j-1]) {
            curr++;
        }
        else {
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<"length of longest arithmetic subarray= "<<ans;
    return 0;
}