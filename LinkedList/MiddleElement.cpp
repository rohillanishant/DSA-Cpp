/*
0 1 2 3 4 5 6 7 8 9 
Middle element: 4
0 1 2 3 4 5 6 7 8 9 10
Middle element: 5
*/
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void middle(Node* head){
    Node* slow=head;
    Node* fast=head->next;
    while(fast){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
    }
    cout<<"Middle element: "<<slow->data;
}
int main() {
    Node* head=new Node();
    head->data=0;
    Node* p=head;
    for(int i=1;i<10;i++){
        Node* x=new Node();
        x->data=i;
        p->next=x;
        p=p->next;
    }
    print(head);
    cout<<endl;
    middle(head);
    cout<<endl;
    Node* x=new Node();
        x->data=10;
        p->next=x;
        p=p->next;
        print(head);
    cout<<endl;
    middle(head);
    return 0;
}