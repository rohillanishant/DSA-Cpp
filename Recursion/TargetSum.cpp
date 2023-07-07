#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
/*Q=> minimum no of elements whose sum = target sum
input array => distinct positive elements
can also use one element multiple times
ex=> target=5 ar={1,7}
1+1+1+1+1=5
ans=5
target=5 ar={1,2,3}
3+2=5
ans=2
*/
int minimum(vector<int> &ar,int target){
    if(target==0 ){     //target reached
        return 0;
    }
    if(target<0){           //not possible to achieve target with selected elements
        return INT_MAX;
    }
    int mini=INT_MAX;           //used to count no of elements
    for(int i=0;i<ar.size();i++){
        int ans=minimum(ar,target-ar[i]);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}
int main() {
    vector<int> ar;
    int n;
    cout<<"Enter No of elements ";
    cin>>n;
    cout<<"Enter elements ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar.push_back(x);
    }
    int target;
    cout<<"Enter target ";
    cin>>target;
    cout<<"Minimum no of Elements to make sum="<<target<<" is "<<minimum(ar,target);

    return 0;
}