#include<iostream>
using namespace std;
//using Binary Search T.C = O(logn)
int root(int n){            //it finds root without floating part
    int s=0,e=n,mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){            // checks from 0....n if mid is square root of n
        if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }else if(mid*mid>n){
            e=mid-1;
        }else{
            return mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter no ";
    cin>>n;
    double ans=root(n);
    int precission;
    cout<<"Enter precession (no of digits after dot) ";
    cin>>precission;
    double step=0.1;
    for(int i=0;i<precission;i++){
        for(double j=ans;j*j<=n;j=j+step){
            ans=j;
        }
        step=step/10;
    }
    cout<<"Answer = "<<ans;
    return 0;
}