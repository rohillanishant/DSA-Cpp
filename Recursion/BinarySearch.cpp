#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& a,int &b,int &e,int &target){
    if(b>e){
        return -1;
    }
    int mid=b/2+e/2;
    if(a[mid]==target){
        return mid;
    }
    if(a[mid]<target){
        b=mid+1;
    }else{
        e=mid-1;
    }
    return search(a,b,e,target);

}
int main() {
    vector<int> a;
    int n;
    cout<<"Enter no of elements ";
    cin>>n;
    cout<<"Enter elements ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout<<"Enter target ";
    int target;
    cin>>target;
    int b=0;
    int ans=search(a,b,n,target);
    if(ans==-1){
        cout<<"Element Not Found";
    }else{
        cout<<"Element found at index "<<ans;
    }
    return 0;
}