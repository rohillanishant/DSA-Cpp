#include<iostream>
#include<vector>
using namespace std;
//T.C= O(nlogn) , S.C= O(1)
void merge(int nums[],int start,int mid,int end){
    int size=end-start+1;
    int gap=size/2+size%2;
    while(gap>0){
        int i=start;
        int j=start+gap;
        while(j<=end){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
            }
            i++;
            j++;
        }
        if(gap<=1){
            gap=0;
        }else{
            gap=gap/2+gap%2;
        }
    }
}
void mergeSort(int nums[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=start/2+end/2;
    mergeSort(nums,start,mid);
    mergeSort(nums,mid+1,end);
    merge(nums,start,mid,end);
}
int main() {
    int nums[]={83,3,7,27,59,1,46};
    mergeSort(nums,0,8);
    for(int i=0;i<7;i++){
        cout<<nums[i]<<' ';
    }
    return 0;
}