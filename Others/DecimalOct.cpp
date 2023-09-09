// DECIMAL TO OCTAL
#include<iostream>
#include<math.h>
using namespace std;
int converter(int n) {
    int i[20],j=0;
    while(n>0) {
        i[j]=n%8;
        j++;
        n/=8;
    }
    for(j=j-1;j>=0;j--) {
        cout<<i[j];
    }
    return 0;
}
int main() {
    int a;
    cout<<"Enter no";
    cin>>a;
    converter(a);
    return 0;
}

/* OTHER WAY
int converter(int n) {
    int x=1,ans=0;
    while (x<=n) {
        x*=8;
    }
    x/=8;
    while(x>0) {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=8;
        ans=ans*10+lastdigit;
    }
    return ans;
}
int main() {
    int a;
    cout<<"Enter no";
    cin>>a;
    cout<<converter(a);
    return 0;
}
*/