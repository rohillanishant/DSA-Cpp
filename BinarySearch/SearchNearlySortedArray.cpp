#include<iostream>
#include<vector>
using namespace std;
// Nearly sorted array example = 10 3 40 20 50 80 70
int search(vector<int>& nums,int target){
    int s=0,e=nums.size(),mid=s+(e-s)/2;
    while(s<=e){
        if(nums[mid]==target){
            return mid;
        }
        if(mid>0 && nums[mid-1]==target){
            return mid-1;
        }
        if(mid<nums.size()-1 && nums[mid+1]==target){
            return mid+1;
        }
        if(nums[mid]>target){
            e=mid-2;
        }else{
            s=mid+2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main() {
    vector<int> nums;
    int n;
    cout<<"Enter No of elements ";
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cout<<"Enter target ";
    cin>>target;
    int ans=search(nums,target);
    if(ans==-1){
        cout<<"No not found";
    }else{
        cout<<"No found at "<<ans;
    }
    return 0;
}