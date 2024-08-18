#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int> &q){        //using stack
    stack<int> s;
    while(!q.empty()){
        int t=q.front();
        q.pop();
        s.push(t);
    }
    while(s.size()>0){
        int t=s.top();
        q.push(t);
        s.pop();
    }
}
void reverse2(queue<int> &q){          //using recursion
    if(q.empty()) return;
    int t=q.front();
    q.pop();
    reverse2(q);
    q.push(t);
}
int main() {
    queue<int> q;
    for(int i=0;i<10;i++){
        q.push(i);
    }
    reverse2(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}