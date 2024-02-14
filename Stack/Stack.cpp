#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int>& s){
    int n;
    cout<<"Enter number to insert/push in stack : \t";
    cin>>n;
    s.push(n);
}
void remove(stack<int>& s){
    if(s.empty()){
        cout<<"Stack is already empty\n";
        return;
    }
    cout<<"Element removed from top was : "<<s.top()<<"\n";
    s.pop();
}
void print(stack<int> &s){
    cout<<"Stack is : ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n Stack Cleared\n";
}
void isEmpty(stack<int>& s){
    if(s.empty()) cout<<"Stack is empty\n";
    else cout<<"Stack is not empty\n";
}
int main() {
    stack<int> s;
    int choice=0;
    while(choice<6){
        cout<<"1.Insert   2.Remove   3.Top Element    4.Print & Clear Stack    5.Check if stack is empty    6.Exit\n";
        cin>>choice;
        switch(choice){
            case 1: insert(s);
                    break;
            case 2: remove(s);
                    break;
            case 3: cout<<"Top element is "<<s.top()<<"\n";
                    break;
            case 4: print(s);
                    break;
            case 5: isEmpty(s);
                    break;
            default: cout<<"Exited";
        }
    }
    return 0;
}