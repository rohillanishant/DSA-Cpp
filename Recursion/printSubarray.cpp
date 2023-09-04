/*
Enter no of elements 5
1 2 3 4 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
2 
2 3 
2 3 4 
2 3 4 5 
3 
3 4 
3 4 5 
4 
4 5 
5 
*/
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &ar,int i,int end){
    for(int j=i;j<=end;j++){
        cout<<ar[j]<<" ";
    }
}
void all(vector<int> &ar,int i){
    if(i==ar.size()){
        return ;
    }
    for(int j=i;j<ar.size();j++){
        print(ar,i,j);
        cout<<"\n";
    }
    all(ar,i+1);
}
int main() {
    int n;
    cout<<"Enter no of elements ";
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    all(ar,0);
    return 0;
}