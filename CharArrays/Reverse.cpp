/* T.C = O(n)  S.C = 1O()
1-->hello
    olleh
2-->noon
    noon
*/
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char c[100];
    cin>>c;
    int i=0,j=strlen(c)-1;
        while(i<j){
            char temp=c[j];
            c[j]=c[i];
            c[i]=temp;
            i++;
            j--;
        }
    cout<<c;
    return 0;
}