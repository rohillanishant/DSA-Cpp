/*PALINDROME - WORD WHICH DOES NOT CHANGE AFTER REVERSING IT
Enter length of words3
enter word 
Hlo
Word is not a Palindrome
Enter length of words4
enter word 
noon
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
    //Approach 1       T.C = O(n) S.C = O(1)
    /*for(int i=0;i<n;i++) {
        if(a[i]!=a[n-1-i]) {
            cout<<"Word is not a Palindrome";
            return 0;
        }
    }*/
    //Approach 2  T.C = O(n) S.C = O(1)
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]!=a[j]){
            cout<<"Word is not a Palindrome";
            return 0;
        }else{
            i++;
            j--;
        }
    }
    // Approach 3 , take another char array and store reverse of a in it and then check both.       T.C = O(n) S.C = O(n)
    cout<<"Word is Palindrome ";
    return 0;
}