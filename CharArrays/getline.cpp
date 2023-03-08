/*
Enter string :-
Hello Everyone I am Nishant
With getline  => Hello Everyone I am Nishant
Enter same string again
Hello Everyone I am Nishant
Without getline => Hello*/
#include<iostream>
using namespace std;
int main() {
    char s1[100],s2[100];
    cout<<"Enter string :-\n";
    cin.getline(s2,100);     //100 is length 
    cout<<"With getline  => "<<s2;
    cout<<"\nEnter same string again\n";
    cin>>s1;
    cout<<"Without getline => "<<s1;
    
    return 0;
}