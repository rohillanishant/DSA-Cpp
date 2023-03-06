#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& nums,int target){
    int s=0,e=nums.size()-1,mid=s+(e-s)/2;
    while(s<=e){
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int> nums;
    int n;
    cout<<"Enter no of elements ";
    cin>>n;
    cout<<"Enter elements ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cout<<"Enter no to be searched ";
    cin>>target;
    int ans=binarySearch(nums,target);
    if(ans==-1){
        cout<<"Number not found";
    }else{
        cout<<"Number found at "<<ans;
    }
    return 0;
}