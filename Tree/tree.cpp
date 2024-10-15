/*
Enter value 20
Enter value for left of 20      30
Enter value for left of 30      50
Enter value for left of 50      -1
Enter value for right of 50     60
Enter value for left of 60      -1
Enter value for right of 60     -1
Enter value for right of 30     40
Enter value for left of 40      -1
Enter value for right of 40     -1
Enter value for right of 20     100
Enter value for left of 100     -1
Enter value for right of 100    -1
20 30 50 -1 60 -1 -1 40 -1 -1 100 -1 -1 
*/
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
int main() {
    cout<<"Enter value ";
    tree* head=insert();
    print(head);
    return 0;
}