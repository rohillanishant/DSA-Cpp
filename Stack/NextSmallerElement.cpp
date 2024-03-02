#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
    vector<int> v={2,1,4,3};
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());
    for(int i=v.size()-1;i>=0;i--){
        while(v[i]<=s.top()){
            s.pop();
        }
        ans[i]=s.top();
        s.push(v[i]);
    }
    cout<<"ans :  \n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<ans[i]<<"\n";
    }
    return 0;
}