//Maximum sum by using  non adjacent elements
/*Enter size of array 9
1 2 3 1 3 5 8 1 9
Maximum sum of non adjacent elements is 24*/
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void solve(vector<int> &ar,int i,int sum,int &maxi){
    if(i>=ar.size()){
        maxi=max(sum,maxi);
        return;
    }
    //include
    solve(ar,i+2,sum+ar[i],maxi);
    //exclude
    solve(ar,i+1,sum,maxi);

}
int main() {
    int n;
    cout<<"Enter size of array ";
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int maxi=INT_MIN;
    solve(ar,0,0,maxi);
    cout<<"Maximum sum of non adjacent elements is "<<maxi;
    return 0;
}