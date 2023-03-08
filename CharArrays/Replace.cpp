/*  T.C = O(n) S.C = O(1)
Hello Everyone ,my name is Nishant
Hello@Everyone@,my@name@is@Nishant
*/
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char c[100];
    cin.getline(c,100);
    int n=strlen(c);
    for(int i=0;i<n;i++){
        if(c[i]==' '){
            c[i]='@';
        }
    }
    cout<<c;
    return 0;
}