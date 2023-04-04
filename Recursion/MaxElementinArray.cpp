#include<iostream>
#include<climits>
using namespace std;
void findMax(int arr[],int n,int &maxi){            //passed by reference
    if(n==0){
        return;
    }
    if(maxi<arr[0]){
        maxi=arr[0];
    }
    findMax(arr+1,n-1,maxi);
}
int main() {
    int arr[]={5,7,40,6,2,1};
    int maxi=INT_MIN;
    findMax(arr,6,maxi);
    cout<<"Max element is "<<maxi;
    return 0;
}