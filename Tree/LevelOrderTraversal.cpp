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
Level 0 - 20 
Level 1 - 30 100
Level 2 - 50 40
Level 3 - 60
*/
#include<iostream>
#include<queue>
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
void levelOrderTraversal(tree* root){
    queue<tree*> q;
    q.push(root);
    q.push(NULL);
    int i=0;
    cout<<"Level "<<i<<" - ";
    i++;
    while(!q.empty()){
        if(q.front()==NULL){
            cout<<endl;
            q.pop();
            if(q.empty()) break;
            cout<<"Level "<<i<<" - ";
            i++;
            q.push(NULL);
            continue;
        }
        cout<<q.front()->data<<" ";
        if(q.front()->left) q.push(q.front()->left);
        if(q.front()->right) q.push(q.front()->right);
        q.pop();
    }
}
int main() {
    cout<<"Enter value ";
    tree* head=insert();
    levelOrderTraversal(head);
    return 0;
}