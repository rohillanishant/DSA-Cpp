#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int &n){
    if(s.empty()){
        s.push(n);
        return;
    }
    int x=s.top();
    s.pop();
    insertAtBottom(s,n);
    s.push(x);
}
void reverse(stack<int> &s,int n){
    if(n==1){
        return;
    }
    int x=s.top();
    s.pop();
    reverse(s,n-1);
    insertAtBottom(s,x);
}
void print(stack<int> s){
    if(s.empty()) return;
    int x=s.top();
    cout<<x<<" ";
    s.pop();
    print(s);
    s.push(x);
}
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    cout<<"top to bottom \n";
    print(s);
    reverse(s,8);
    cout<<"\nafter reverse : ";
    print(s);
    return 0;
}