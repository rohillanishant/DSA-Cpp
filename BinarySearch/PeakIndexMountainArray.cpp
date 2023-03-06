#include<iostream>
#include<vector>
//MOUNTAIN ARRAY HAVE 2 PARTS , 1st in increasing order ,then decreasing order.
// ex= 1,3,5,6,7,8,7,5,3,2
//here array is mountain array and peak element is 8 with index 5
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    long b=0,e=arr.size()-1;
        long mid;
        while(b<=e){
            mid=(b+e)/2;
            if(mid==0 && arr[mid]>arr[mid+1]){
                return mid;
            }else if(mid==0 && arr[mid]<arr[mid+1]){
                b=mid+1;
            }
            else if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }else if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]){
                e=mid-1;
            }else if(arr[mid]<arr[mid+1] && arr[mid] >arr[mid-1]){
                b=mid+1;
            }
        }
        return -1;
    }
int main() {
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
    int index=peakIndexInMountainArray(nums);
    if(index==-1){
        cout<<"No peak element";
    }else{
        cout<<"Peak element is "<<nums[index]<<" and its index is "<<index;
    }
    return 0;
}