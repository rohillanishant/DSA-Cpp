//Max no of segments by cutting rod into 3 possible lengths
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(int n,vector<int> &ar){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    int maxi=INT_MIN;
    for(int i=0;i<3;i++){
        int ans=solve(n-ar[i],ar);
        maxi=max(maxi,ans+1);
    }
    return maxi;
}
int main() {
    int n;
    cout<<"Enter length of rod ";
    cin>>n;
    cout<<"Enter possible lengths to cut ";
    vector<int> ar(3);
    for(int i=0;i<3;i++){
        cin>>ar[i];
    }
    int ans=solve(n,ar);
    if(ans<0){
        ans=0;
    }
    cout<<"Max no of segments will be "<<ans;
    return 0;
}