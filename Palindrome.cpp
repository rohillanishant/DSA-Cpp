/*PALINDROME - WORD WHICH DOES NOT CHANGE AFTER REVERSING IT
Enter length of words3
enter word 
Hlo
Word is not a Palindrome
Enter length of words5
enter word 
NITIN
Word is Palindrome */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter length of words";
    cin>>n;
    char a[n];
    cout<<"enter word \n";
    cin>>a;
    for(int i=0;i<n;i++) {
        if(a[i]!=a[n-1-i]) {
            cout<<"Word is not a Palindrome";
            return 0;
        }
    }
    cout<<"Word is Palindrome ";
    return 0;
}