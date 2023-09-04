#include<iostream>
#include<vector>
using namespace std;
void sort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int mid=start/2+end/2;
    int  len1=mid-start+1;
    int *left=new int[len1];
    int len2=end-mid;
    int *right=new int[len2];
    sort(arr,start,mid);
    sort(arr,mid+1,end);
    int k=start;
    for(int i=0;i<len1;i++){
        left[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k++];
    }
    int i=0,j=0,index=start;
    while(i<len1 && j<len2){
        if(left[i]<right[j]){
            arr[index++]=left[i++];
        }else{
            arr[index++]=right[j++];
        }
    }
    while(i<len1){
        arr[index++]=left[i++];
    }
    while(j<len2){
        arr[index++]=right[j++];
    }
}
int main() {
    int arr[]={83,3,7,27,59,1,46};
    sort(arr,0,8);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}