#include<iostream>
using namespace std;
void reverse(string &s,int i,int j) {
    if(i>=j) {
        return;
    }
    swap(s[i],s[j]);
    reverse(s,i+1,j-1);
}
int main() {
    string s;
    cout<<"Enter String ";
    cin>>s;
    reverse(s,0,s.size()-1);
    cout<<"After reversing "<<s;
    return 0;
}