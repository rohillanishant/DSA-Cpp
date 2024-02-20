/*top to bottom 
Before sorting : 70 80 30 50 40 20 60 10 
After Sorting : 10 20 30 40 50 60 70 80 
*/
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
    if(s.empty()) return;
    int x=s.top();
    cout<<x<<" ";
    s.pop();
    print(s);
    s.push(x);
}
void insert(stack<int>& s,int &target){      //insert in sorted stack
    if(s.empty() || target<=s.top()){
        s.push(target);
        return;
    }
    int x=s.top();
    s.pop();
    insert(s,target);
    s.push(x);
}
void sort(stack<int> &s){
    if(s.size()==1) return;
    int target=s.top();
    s.pop();
    sort(s);
    insert(s,target);
} 
int main() {
    stack<int> s;
    s.push(10);
    s.push(60);
    s.push(20);
    s.push(40);
    s.push(50);
    s.push(30);
    s.push(80);
    s.push(70);
    cout<<"Before sorting : ";
    print(s);
    sort(s);
    cout<<"\nAfter Sorting : ";
    print(s);
    return 0;
}