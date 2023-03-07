/*Input :
3
10
4 1 2 3 4
8
1 1   1 2 
8
8 1 1 1 1 1 1 1 1

Output:
12
36
1
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isPossible(vector<int> cooks,int p,int mid){
    int i=0,j=1;
    int time=0;
    while(i<cooks.size()){
        if(time+cooks[i]*j>mid){
            i++;
            j=1;
            time=0;
        }else{
            time+=cooks[i]*j;
            j++;
            p--;
        }
        if(p==0){
            return true;
        }
    }
    return false;
}
int main() {
    int testcases;
    cin>>testcases;
    while(testcases--){
        //cout<<"Enter p,l";
        int p,l,ans=-1;
        cin>>p;     //no of prata
        cin>>l;     //no of cooks
        vector<int> cooks;
        int maxrank=-1;
        //cout<<"Enter elements";
        for(int i=0;i<l;i++){
            int rank;
            cin>>rank;          // rank of ith cook 
            if(maxrank<rank){
                maxrank=rank;
            }
            cooks.push_back(rank);
        }
        sort(cooks.begin(),cooks.end());
        int s=0,e=maxrank * (p*(p+1))/2;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(isPossible(cooks,p,mid)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}