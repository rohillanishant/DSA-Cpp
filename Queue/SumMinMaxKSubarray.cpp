#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> q; // max;
    deque<int> q2; //min;
    int ans=0;
    int arr[]={2,5,-1,7,-3,-1,-2};
    int k=4;
    for(int i=0;i<k;i++){
        while(!q.empty() && arr[i]>arr[q.back()]){      // for max
            q.pop_back();
        }
        q.push_back(i);
        while(!q2.empty() && arr[i]<arr[q2.back()]){      // for min
            q2.pop_back();
        }
        q2.push_back(i);
    }
    ans+=arr[q.front()]+ arr[q2.front()]; //max + min
    for(int i=k;i<=6;i++){
        while(!q.empty() && i-q.front()>=k){
            q.pop_front();
        }
        while(!q2.empty() && i-q2.front()>=k){
            q2.pop_front();
        }
        while(!q.empty() && arr[i]>arr[q.back()]){      // for max
            q.pop_back();
        }
        while(!q2.empty() && arr[i]<arr[q2.back()]){      // for min
            q2.pop_back();
        }
        q.push_back(i);
        q2.push_back(i);
        ans+=arr[q.front()]+ arr[q2.front()]; //max + min
    }
    cout<<ans;
    return 0;
}