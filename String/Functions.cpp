/*
Enter string :-         Hello Everyone
Length of s => 14
After Deleting last element => Hello Everyon
String is not empty
write an element to add to string               e
After adding = > Hello Everyone
 Enter index & length of substring 6 8
Substring => Everyone
Enter another string to compare                 first > second
Enter a substring to find in string             Every
Found at => 6
Enter index , length and string to replace by that string               6 8 World
Before replacing => Hello Everyone      After replacing => Hello World
Enter index and length to erase                 1 4
before erasing => Hello World   After erasing => H World
*/
#include<iostream>
using namespace std;
int main() {
    string s;
    cout<<"Enter string :-\t\t";                      
    getline(cin,s);
    cout<<"Length of s => "<<s.length();                                             //1
    s.pop_back();                                                                   //2 
    cout<<"\nAfter Deleting last element => "<<s;
    if(s.empty()){                                                                  //3
        cout<<"\nString is empty";
    }else{
        cout<<"\nString is not empty";
    }
    cout<<"\nwrite an element to add to string \t\t";
    char add;
    cin>>add;
    s.push_back(add);                                                               //4
    cout<<"After adding = > "<<s;
    cout<<"\n Enter index & length of substring ";
    int index,length;
    cin>>index>>length;
    cout<<"Substring => "<<s.substr(index,length);                                  //5
    string s2;
    cout<<"\nEnter another string to compare \t\t";
    getline(cin,s2);
    if(s.compare(s2)==0){                                                           //6
        cout<<"Equal string ";
    }else if(s.compare(s2)<0){
        cout<<"first < second";
    }else{
        cout<<"first > second";
    }
    cout<<"\nEnter a substring to find in string \t\t";
     getline(cin,s2);
     if(s.find(s2)==string::npos){                                                  //7
        cout<<"Not found";
     }else{
        cout<<"Found at => "<<s.find(s2);   
     }
     cout<<"\nEnter index , length and string to replace by that string \t\t";
     cin>>index>>length>>s2;
     cout<<"Before replacing => "<<s;
     s.replace(index,length,s2);                                                      //8
     cout<<" \tAfter replacing => "<<s;
     cout<<"\nEnter index and length to erase \t\t";
     cin>>index>>length;
     cout<<"before erasing => "<<s;
     s.erase(index,length);                                                          //9
     cout<<" \tAfter erasing => "<<s;
    return 0;
}