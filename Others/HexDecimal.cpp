//HEXADECIMAL TO DECIMAL
#include<bits/stdc++.h>
using namespace std;
int convert(string n) {
    int x=1,ans=0;
    int s=n.size();
    for(int j=s-1;j>=0;j--) {
        if(n[j]>='0' && n[j]<='9') {
            ans+=x*(n[j]-'0');
        }
        else if(n[j]>='A' && n[j] <='F') {
            ans+=x*(n[j] - 'A' +10);
        }
        x*=16;
    }
    return ans;
}
int main() {
    string a;
    cout<<"Enter Hexadecimal no";
    cin>>a;
    cout<<convert(a);
    return 0;
}