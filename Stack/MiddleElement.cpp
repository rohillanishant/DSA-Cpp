#include <iostream>
#include<stack>
using namespace std;
int middle(stack<int>& st,int &n){
    if(st.size()==n/2 + n%2){
        return st.top();
    }
    int temp=st.top();
    st.pop();
    int ans=middle(st,n);
    st.push(temp);
    return ans;
}
int main(){
    stack<int> st;
    for(int i=0;i<8;i++){
        st.push((i+1)*10);
    }
    int n=st.size();
    if(n==0){
        cout<<"Empty stack\n";
        return;
    } 
    cout<<"Middle element is "<<middle(st,n);
    return 0;
}