#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int> &s,int &n){
    if(s.empty()){
        s.push(n);
        return;
    }
    int x=s.top();
    s.pop();
    insert(s,n);
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
    int n=s.top();
    s.pop();
    insert(s,n);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}