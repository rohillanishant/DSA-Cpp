#include<iostream>
#include<vector>
using namespace std;
int oddOccurence(vector<int>& nums){        //Approach 2 T.C=O(logn)
    int s=0,e=nums.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid==0 && nums[mid]!=nums[mid+1]){
            return mid;
        }
        if(mid==nums.size()-1 && nums[mid]!=nums[mid-1]){
            return mid;
        }
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            return mid;
        }
        if((mid<nums.size()-1 && nums[mid]==nums[mid+1] && mid%2==0) || ( mid>0 && nums[mid]==nums[mid-1] && mid%2==1)){           //Right search
            s=mid+1;
        }else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main() {
    vector<int> nums;
    int n;
    cout<<"Enter no of elements ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int ans=0;
    /*Approach 1 = xor all values T.C=O(n)
    for(int i=0;i<13;i++){
        ans=ans^a[i];
    }*/
    ans=oddOccurence(nums);
    if(ans==-1){
        cout<<"Not found ";
    }else {
        cout<<"Number with odd occurence is "<<nums[ans]<<" and its position is "<<ans;
    }
    return 0;
}