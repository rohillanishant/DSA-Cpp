/*
NiShaNt
nishant

HEFHUBncbhgHDDBCJ
hefhubncbhghddbcj

MyNameIsNishant
mynameisnishant
*/
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char c[100];
    cin>>c;
    for(int i=0;i<strlen(c);i++){
        if(c[i]>=65 && c[i]<=90){
            c[i]=c[i]-'A'+'a';
        }
    }
    cout<<c;
    return 0;
}