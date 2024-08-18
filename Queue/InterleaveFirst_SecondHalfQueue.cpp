#include<iostream>
#include<stack>
#include<queue>
// 1 2 3 4 5 -> 1 4 2 5 3 
using namespace std;
void interleave(queue<int> &q){
    queue<int> q2;
    int n=q.size();
    for(int i=0;i<(n/2+n%2);i++){
        q2.push(q.front());
        q.pop();
    }
    for(int i=0;i<n/2;i++){
        q.push(q2.front());
        q2.pop();
        q.push(q.front());
        q.pop();
    }
    if(q2.size()>0) q.push(q2.front());
}
int main() {
    queue<int> q;
    for(int i=0;i<11;i++){
        q.push(i);
    }
    interleave(q);
    cout<<"\nInterleaved queue : ";
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}