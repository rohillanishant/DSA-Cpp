// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* prev;
    struct node* next;
}*head=NULL,*last=NULL;
void Add(){
        cout<<"Enter no to add ";
        node* p=new node();
        cin>>p->data;
        if(last==NULL){
                head=p;
                last=p;
                return;
        }
        last->next=p;
        p->prev=last;
        last=p;
}
void DeletePos(){                       
        int pos,x=1;
        if(head==NULL){
                cout<<"Empty List\n";
                return;
        }
        cout<<"Enter position(1-indexed) ";
        cin>>pos;
        if(pos==1){
                node* q=head;
                if(head->next==NULL){
                        head=NULL;
                        last=head;
                }else{
                        head=head->next;
                        head->prev=NULL;
                }
                delete q;
                return;
        }
        node* p=head;
        while(x<pos){
                p=p->next;
                if(p==NULL){
                        cout<<"Less elements in List\n";
                        return;
                }
                x++;
        }
        if(p==last){
                p=last;
                last=last->prev;
                last->next=NULL;
                p->prev=NULL;
                delete p;
                return;
        }
        p->prev->next=p->next;
        p->next->prev=p->prev;
        p->next=NULL;
        p->prev=NULL;
        delete p;
        return;
        
}
void DeleteNo(){             
        int no;
        cout<<"Enter no to be deleted fron List ";
        cin>>no;
        node* p=head;
        if(head->next==NULL && head->data==no){
                delete head;
                head=NULL;
                last=head;
                return;
        }
        while(p){
                if(p->data==no){
                        if(p==head && p==last){
                                head=NULL;
                                last=head;
                                p=NULL;
                        }
                        else if(p==head){
                                head=head->next;
                                head->prev=NULL;
                                p->next=NULL;
                                p=head;
                        }else if(p==last){
                                last=last->prev;
                                last->next=NULL;
                                p->prev=NULL;
                                p=NULL;
                        }else{
                                p->prev->next=p->next;
                                p->next->prev=p->prev;
                                node* q=p;
                                p=p->next;
                                q->next=NULL;
                                q->prev=NULL;
                                delete q;
                        }
                }else{
                        p=p->next;
                }
        }
        p=NULL;
        delete p;
}
void Insert(){     
        cout<<"Enter position and no(1-indexed) ";
        int pos,no;
        cin>>pos>>no;
        node* p=new node();
        p->data=no;
        if(head==NULL){
                head=p;
                last=p;
                return;
        }      
        if(pos==1){
                p->next=head;
                head->prev=p;
                head=p;
                return;
        }
        int x=1;
        node* temp=head;
        while(x<pos && temp){
                temp=temp->next;
                x++;
        }
        if(temp==NULL){
                last->next=p;
                p->prev=last;
                last=p;
                return;
        }
        p->next=temp;
        p->prev=temp->prev;
        temp->prev->next=p;
        temp->prev=p;
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
void ReverseDisplay(){
        node* p=last;
        if(p==NULL){
                cout<<"Empty List\n";
                return;  
        }
        cout<<"Linked List :- \n";
        while(p){
                cout<<p->data<<"  ";
                p=p->prev;
        }
        cout<<"\n";
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
        delete head;
        head=NULL;
        last=head;
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
                case 6: ReverseDisplay();
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