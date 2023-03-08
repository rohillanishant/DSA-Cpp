/*
MyNameIsNishant
MYNAMEISNISHANT

helloEveryoneIamNishant
HELLOEVERYONEIAMNISHANT

NiShaNT
NISHANT
*/
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char c[100];
    cin>>c;
    for(int i=0;i<strlen(c);i++){
        if(c[i]>=97 && c[i]<=122){
            c[i]=c[i]-'a'+'A';
        }
    }
    cout<<c;
    return 0;
}