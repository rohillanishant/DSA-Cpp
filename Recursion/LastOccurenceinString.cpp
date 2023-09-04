#include<iostream>
using namespace std;
//T.C= O(n)
int lastOccurence(string &s,char &key,int i){
    if(i<0){
        return -1;
    }
    if(s[i]==key){
        return i;
    }
    return lastOccurence(s,key,i-1);
}
int main() {
    string s;
    cout<<"Enter string ";
    cin>>s;
    char key;
    cout<<"Enter key ";
    cin>>key;
    int ans=lastOccurence(s,key,s.size()-1);
    if(ans==-1){
        cout<<"Char Not Found ";
    }else{
        cout<<"Char last occured at "<<ans;
    }
    return 0;
}