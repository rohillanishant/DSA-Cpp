#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter no";
    cin>>n;
    bool arr[n];
    for(int i=0;i<=n;i++) {
        arr[i]=false;                        //sfp[i]=i;
    }
    for(int i=2;i<=n;i++) {
        if(!arr[i]) {                        //if(spf[i]==i)
            for(int j=i*i;j<=n;j+=i) {
                arr[j]=true;                   //if(spf[j]==j) {spf[j]=i;}
            }
        }
    }
    int m=n;
    for(int i=2;i<=n;i++) {                         //while(n!=1) {
        if(!arr[i] && m%i==0) {                       //cout<<spf[n]<<" ";
            m=m/i;                                    //n=n/spf[n];}
            cout<<i<<"  ";
            i--;
        }
    }
    return 0;
}
