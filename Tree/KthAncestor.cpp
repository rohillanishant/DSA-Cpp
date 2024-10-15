#include<iostream>
using namespace std;
class tree{
    public:
    int data;
    tree* left;
    tree* right;
};
tree* insert(){
    int val;
    cin>>val;
    if(val<0) return NULL;
    tree* x=new tree();
    x->data=val;
    cout<<"Enter value for left of "<<val<<"\t";
    x->left=insert();
    cout<<"Enter value for right of "<<val<<"\t";
    x->right=insert();
    return x;
}
void print(tree* root){
    if(root==NULL){
        cout<<-1<<" ";
        return;
    } 
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int solve(tree *root, int &k, int &node,int &ans){
    if(root==NULL) return -1;
    if(root->data==node) return 1;
    int left=solve(root->left,k,node,ans);
    int right=solve(root->right,k,node,ans);
    if(left==k || right==k) ans=root->data;
    if(left==-1 && right==-1) return -1;
    if(left!=-1) return left+1;
    return right+1;
}
int main() {
    cout<<"Enter value ";
    tree* head=insert();
    print(head);
    cout<<"\nenter k and node ";
    int k,node;
    cin>>k>>node;
    int ans=-1;
    solve(head,k,node,ans);
    cout<<"Answer= "<<ans;
    return 0;
}