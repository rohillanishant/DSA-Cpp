#include<iostream>
using namespace std;
string Remove(string s) {
    if(s.length()==0) {
        return "";
    }
    char ch=s[0];
    string ans=Remove(s.substr(1));
    if(ch==ans[0]){
        return ans; 
    }
    return ch+ans;
}
int main() {
    string s="aaaahhhhhhcccckkkkddddrrrrraaaa";
    cout<<Remove(s);
    return 0;
}