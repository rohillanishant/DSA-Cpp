#include<iostream>
#include<vector>
using namespace std;
void search(vector<vector<int>>& nums,int target){
    int s=0,e=nums.size()*nums[0].size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int row=mid/(nums[0].size());               //mid divided by no of elements in a row
        int col=mid%(nums[0].size());
        if(nums[row][col]==target){
            cout<<"Row Index = "<<row<<" Column Index = "<<col;
            return;
        }else if(nums[row][col]<target){
            s=mid+1;
        }else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<"No not found";
}
int main() {
    vector<vector<int>> nums;
    int m,n;
    cout<<"Enter row and column\n";
    cin>>m>>n;
    cout<<"Enter elements\n";
    for(int i=0;i<m;i++){
        vector<int> add;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            add.push_back(x);
        }
        nums.push_back(add);
    }
    int target;
    cout<<"Enter element to search ";
    cin>>target;
    search(nums,target);
    return 0;
}