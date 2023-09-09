//ADD 2 BINARY NO's
#include<iostream>
using namespace std;
int add(int a,int b) {
    int x,y,k=0,i=0;
    char ans[20];
    while(a>0 || b>0) {
        x=a%10;
        y=b%10;
        a=a/10;
        b=b/10;
        if(x==1 && y==1 && k==1) {
            ans[i]='1';
            k=1;
        }
        else if((x==0 && y==1 && k==1) || (x==1 && y==0 && k==1) || (x==1 && y==1 && k==0)) {
            ans[i]='0';
            k=1;
        }
        else if ((x==0 && y==0 && k==1) || (x==1 && y==0 && k==0) || (x==0 && y==1 && k==0)) {
            ans[i]='1';
            k=0;
        }
        else if(x==0 && y==0 && k==0) {
            ans[i]='0';
            k=0;
        }
        i++;
    }
    if(k==1) {
        ans[i]='1';
        k=0;
    }
    for(;i>=0;i--) {
        cout<<ans[i];
    }
    return 0;
}
int main() {
    int m,n;
    cout<<"Enter Binary no's";
    cin>>m>>n;
    add(m,n);
    return 0;
}
