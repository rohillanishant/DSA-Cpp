#include<iostream>
#include<vector>
// move all negative elemens=ts to left side of array PENDING 
// Dutch National Flag Approach
// T.C = O(n) 
// S.C = O(1)
using namespace std;
int main() {
    vector<int> a={1,-4,8,-6,-3,5,4,7,-5};
    int l=0,h=a.size()-1;
    while(l<h){
        if(a[l]<0){     //if left element is -ve go ahead
           l++;
        }else if(a[h]>0){           // if right element is positive go to left
            h--;
        }else{
            swap(a[l],a[h]);
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
    }