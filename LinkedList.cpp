#include<iostream>
using namespace std; 
struct node{
    int data;
    node *next;
}*first=NULL,*last=NULL;
node *p=new node;
void Add() {
        int x;
        cout<<"Enter no to add\n";
        cin>>x;
        first=new node;
        last=new node;
        if(first==NULL) {
                first->data=x;
                first->next=NULL;
                last=first;
        }
        else {
                p->data=x;
                p->next=NULL;
                last->next=p;
                last=p;
        }
}
void Insert() {
        int x,pos;
        if(p==NULL) {
                cout<<"EMPTY\n";
                return;
        }
        cout<<"Enter position and value\n";
        cin>>pos>>x;
        node *q=new node;
        if(pos==1) {
                q->data=x;
                q->next=first;
                first=q;
        }
        else {
                p=first;
                for(int i=1;p && i<pos;i++) {
                        p=p->next;
                }
                q->data=x;
                q->next=p->next;
                p->next=q;
        }
}
void Delete() {
        int pos;
        if(p==NULL) {
                cout<<"EMPTY\n";
                return;
        }
        cout<<"Enter position of the no which you want to delete\n";
        cin>>pos;
        node *q=new node;
        if(pos==1) {
                first=first->next;
        }
        else {
                p=first;
                for(int i=1;i<pos && p;i++) {
                        p=p->next;
                }
                q=p->next;
                p->next=q->next;
        }
}
void Display() {
        p=first;
        if(p==NULL) {
                cout<<"EMPTY\n";
                return;
        }
        for(int i=1;p!=NULL;i++) {
                cout<<p->data<<"\t";
                p=p->next;
        }
}
void RDisplay(node* p) {
        if(p==NULL) {
                cout<<"EMPTY\n";
                return;
        }

        RDisplay(p->next);
        cout<<p->data<<"\n";
}
int main() {
    int ch;
    while(1) {
        cout<<"ENTER 1.ADD 2.INSERT 3.DELETE 4.DISPLAY  5.Reverse Display  6.EXIT\n";
        cin>>ch;
        switch(ch) {
                case 1: Add();
                        break;
                case 2: Insert();
                        break;
                case 3: Delete();
                        break;
                case 4: Display();
                        break;
                case 5: RDisplay(first);
                        break;
                case 6: exit(0);
                        break;
                default:cout<<"Invalid input\n";
        }
    }
    return 0;
}