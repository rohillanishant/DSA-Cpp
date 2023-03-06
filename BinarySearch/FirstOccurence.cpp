#include<iostream>
#include<vector>
using namespace std;
//LEETCODE Q34
int firstOccurence(vector<int>& nums,int target){
    int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }else if(nums[mid]>target){
                e=mid-1;
            }else {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
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
    int ans=firstOccurence(nums,target);
    if(ans==-1){
        cout<<"Number not found";
    }else{
        cout<<"Number first found at "<<ans;
    }
    return 0;
}