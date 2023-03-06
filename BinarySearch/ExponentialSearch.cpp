#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> nums,int s,int e,int x){
    if(e>=nums.size()){
        e=nums.size()-1;
    }
    int mid=s+(e-s)/2;
    while(s<=e){
        if(nums[mid]==x){
            return mid;
        }else if(nums[mid]<x){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int exponentialSearch(vector<int> nums,int x){
    if(nums[0]==x){
        return 0;
    }
    int i=1;
    while(i<nums.size() && nums[i]<=x){
        i=i*2;
    }
    return binarySearch(nums,i/2,i,x);
}
int main() {
    vector<int> nums;
    int n;
    cout<<"Enter size ";
    cin>>n;
    cout<<"Enter elements ";
    while(n--){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"Enter element to search ";
    int x;
    cin>>x;
    cout<<"element found at "<<exponentialSearch(nums,x);
    return 0;
}