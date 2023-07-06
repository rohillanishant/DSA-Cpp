/*
Enter string and key 
SpaceComplexity r
Key not found in string
---------------------------------------------------------------------------------------------------------------------
Enter string and key 
Nishant s
Key found in string at 2
*/
#include<iostream>
using namespace std;
int isPresent(string &str,int i,int n,char &key){     //Passed by reference to save space complexity (program will run correctly even without it) 
    if(i==n){
        return -1;
    }
    if(str[i]==key){
        return i;
    }
    return isPresent(str,i+1,n,key);
}
int main() {
    string str;
    char key;
    cout<<"Enter string and key \n";
    cin>>str>>key;
    int ans=isPresent(str,0,str.length(),key);
    if(ans!=-1){
        cout<<"Key found in string at "<<ans;
    }else{
        cout<<"Key not found in string";
    }
    return 0;
}