#include<iostream>
#include<vector>
using namespace std;
void subsequence(string &s,int i,string x,vector<string> &ans){
    if(i==s.size()){
        ans.push_back(x);
        return;
    }
    subsequence(s,i+1,x,ans);
    x+=s[i];
    subsequence(s,i+1,x,ans);
}
int main() {
    string s="abcde";
    string x="";
    vector<string> ans;
    subsequence(s,0,x,ans);
    cout<<"subsquences are : \n";
    for(int i=0;i<ans.size();i++){      //empty string is also subsequence
        cout<<ans[i]<<'\n';
    }
    return 0;
}