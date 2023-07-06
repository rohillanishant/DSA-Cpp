#include<iostream>
#include<vector>
using namespace std;
void check(string &s,int index,char &key,vector<int>& ans){
    //key and string by reference because they do not change.
    //if pass by value then space complexity increases
    if(index>=s.size()){
        return;
    }
    if(s[index]==key){
        ans.push_back(index);
    }
    check(s,index+1,key,ans);
}
int main() {
    string s="Hello I am Nishant. Today is 6th July 2023";
    cout<<"Enter key\n";
    char key;
    cin>>key;
    vector<int> ans;
    check(s,0,key,ans);
    if(ans.size()==0){
        cout<<"Key Not found";
    }else {
        cout<<"Key found at :\n";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<' ';
        }
    }
    return 0;
}