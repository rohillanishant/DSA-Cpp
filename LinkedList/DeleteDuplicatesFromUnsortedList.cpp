#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
};
void print(Node* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void removeDuplicate(Node* head){
    unordered_map<int,bool> mp;
    Node* curr=head->next;
    Node* prev=head;
    mp[prev->val]=true;
    while(curr){
        if(mp[curr->val]){
            Node* temp=curr;
            prev->next=curr->next;
            curr=curr->next;
            temp->next=NULL;
            delete temp;
            
        }else{
            mp[curr->val]=true;
            prev=curr;
            curr=curr->next;
        }
    }
}
int main() {
    Node* head=new Node();
    head->val=0;
    Node* p=head;
    int n;
    cout<<"Enter no of elements ";
    cin>>n;
    for(int i=0;i<n;i++){
        Node* x=new Node();
        cin>>x->val;
        if(i==0){
            head=x;
            p=x;
            continue;
        }
        p->next=x;
        p=p->next;
    }
    //print(head);
    removeDuplicate(head);
    cout<<"After deletion : ";
    print(head);
    return 0;
}