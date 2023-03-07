//https://www.spoj.com/problems/EKO/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isPossible(vector<long long int>& trees,long long int length,long long int mid){
    long long int cut=0;
     for(int i=0;i<trees.size();i++){
        if(trees[i]>mid){
            cut+=trees[i]-mid;
        }
        if(cut>=length){
        return true;
        }
    }
     return false;
}
int main(){
    long long int n,ans=-1,length;
    // cout<<"Enter no of elements in vector and length of wood reqd ";
    cin>>n>>length;
    vector<long long int> trees;
    //cout<<"Enter elements ";
    int max=-1;
    while(n--){
        long long int x;
        cin>>x; 
        if(x>max){
            max=x;
        }
        trees.push_back(x);
    }
    long long int s=0,e=max,mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(trees,length,mid)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;
}