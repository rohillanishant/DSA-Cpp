#include<iostream>
using namespace std;
int divide(int dividend,int divisor){
    int s=0,e=abs(dividend),mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(abs(mid*divisor)==abs(dividend)){
            ans=mid;
            break;
        }else if(abs(mid*divisor)<abs(dividend)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    if((dividend>0 && divisor<0) || dividend<0 && divisor>0){
        return -ans;
    }
    return ans;
}
int main() {
    int divisor,dividend;
    cout<<"Enter dividend and divisor ";
    cin>>dividend>>divisor;
    double ans=divide(dividend,divisor);
    cout<<"Answer = "<<ans;
    int precission;
    cout<<"\nEnter precission ";
    cin>>precission;
    double step=0.1;
    for(int i=0;i<precission;i++){
        for(double j=ans;j*divisor<=dividend;j=j+step){
            ans=j;
        }
        step=step/10;
    }
    cout<<"Floating Answer = "<<ans;
    return 0;
}