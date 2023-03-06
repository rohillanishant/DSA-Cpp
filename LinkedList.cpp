// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
}*head=NULL,*last=NULL;
void Add(){
        cout<<"Enter no to add ";
        node* p=new node();
        cin>>p->data;
        p->next=NULL;
        if(head==NULL){
            head=p;
            last=p;
        }else{
            last->next=p;
            last=p;    
        }
}
void DeletePos(){                       //not correct, last no can not be deleted
        int pos,x=1;
        cout<<"Enter position(1-indexed) ";
        cin>>pos;
        node* p=head;
        node* prev=head;
        if(head==NULL){
                cout<<"List is already empty \n";
                return;
        }
        if(pos==1){
                if(last==head){
                        head=head->next;
                        last=head;
                }else {
                        head=head->next;
                }
                return;
        }
        while(x<pos){
            prev=p;
            p=p->next;
        }
        prev->next=p->next;
        if(p==last){
                last=prev;
        }
}
void DeleteNo(){                //incorrect when only 1 element
        int no;
        cout<<"Enter no to be deleted fron List ";
        cin>>no;
        node* prev=head;
        node* p=head;
        while(head){
                if(head->data==no){
                        head=head->next;
                }else {
                        break;
                }
        }
        p=head->next;
        prev=head;
        while(p){
                if(p->data==no){
                        prev->next=p->next;
                }else {
                        prev=p;
                }
                p=p->next;
        }
}
void Insert(){                  //not at last
        int pos,no,x=2;
        cout<<"Enter position and no ";
        cin>>pos>>no;
        node* p=head->next;
        node* prev=head;
        node* t=new node();
        t->data=no;
        if(pos==1){
                t->next=head;
                head=t;
                return;
        }
        while(x<pos){
                prev=p;
                p=p->next;
                x++;
        }
        prev->next=t;
        t->next=p;
}
void Display(){
        node* p=head;
        if(head==NULL){
                cout<<"List is Empty\n";
                return;
        }
        cout<<"Linked List :- \n";
        while(p){
                cout<<p->data<<"  ";
                p=p->next;
        }
        cout<<"\n";
}
void ReverseDisplay(node* p){
        if(head==NULL) {
                cout<<"EMPTY LIST\n";
                return;
        }
        if(p==NULL){
                return;
        }
        ReverseDisplay(p->next);
        cout<<p->data<<" ";
        if(p==head){
                cout<<endl;
        }
}
void count(){
        int x=0;
        node* p=head;
        while(p){
                x++;
                p=p->next;
        }
        cout<<"No of elements in the List are "<<x<<"\n";
}
void clear(){
        head=NULL;
        last=NULL;
}
int main() {
    int ch=0;
    while(ch<9) {
        cout<<"ENTER 1.ADD   2.INSERT   3.DELETE NO   4.DELETE NO BY POSITION    5.DISPLAY  6.Reverse Display  7.NO OF ELEMENTS  8.CLEAR LIST   9.EXIT\n";
        cin>>ch;
        switch(ch) {
                case 1: Add();
                        break;
                case 2: Insert();
                        break;
                case 3: DeleteNo();
                        break;
                case 4: DeletePos();
                        break;
                case 5: Display();
                        break;
                case 6: ReverseDisplay(head);
                        break;
                case 7: count();
                        break;
                case 8:clear();
                        break;
                default:cout<<"\t\t\t\t\tEXITED\n";
        }
    }
    return 0;
}