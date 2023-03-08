/*
T.C = O(n)  S.C = O(1)
1-->Hello
    Length of char array is 5
    Length of char array using strlen function is 5
    Total size of char array is 100
2-->hello world
    Length of char array is 5
    Length of char array using strlen function is 5
    Total size of char array is 100
*/
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char c[100];
    cin>>c;     //only take input before space
    int i=0;
    while(c[i]!='\0'){
        i++;
    }
    cout<<"Length of char array is "<<i;
    cout<<"\nLength of char array using strlen function is "<<strlen(c);
    cout<<"\nTotal size of char array is "<<sizeof(c)/sizeof(char);
    return 0;
}