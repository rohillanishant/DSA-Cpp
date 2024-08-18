#include<iostream>
using namespace std;
class Queue{
    private:
    int *arr;
    int front;
    int size;
    int rear;
    public:
    Queue(int size){
        arr=new int[size];
        this->size=size;
        front=0;
        rear=0;
    }
    void push_front(int data){
        if(front==rear && front!=0){
            cout<<"Queue Overflow\n";
            return;
        }
        if(front!=0) {
            front--;
        }else{
            front=size-1;
        }
        arr[front]=data;
    }
    void push_rear(int data){
        if(front==rear && front!=0){
            cout<<"Queue Overflow\n";
            return;
        }
        if(rear==size){
            if(front==0){
                cout<<"Queue Overflow\n";
                return;
            }else{
                rear=0;
            }
        }
        arr[rear]=data;
        rear++;
    }
    void pop_front(){
        if(front==rear && front==0) {
            cout<<"Queue Underflow\n";
            return;
        }
        if(front==size-1){
            front=0;
        }else{
            front++;
        }
        if(front==rear){
            front=0;
            rear=0;
        }
    }
    void pop_rear(){
        if(front==rear && front==0) {
            cout<<"Queue Underflow\n";
            return;
        }
        if(rear==0){
            rear=size-1;
        }else{
            rear--;
        }
        if(front==rear){
            front=0;
            rear=0;
        }
    }
    void getFront(){
        if(front==rear && front==0){
            cout<<"Queue Underflow\n";
            return;
        }
        cout<<"Element at front is "<<arr[front]<<"\n";
    }
    void getSize(){
        if(rear==front && front!=0) cout<<"Size of Queue is "<<size<<"\n";
        else if(rear>=front) cout<<"Size of Queue is "<<rear-front<<"\n";
        else cout<<"Size of Queue is "<<size-front+rear<<"\n";
    }
    bool isEmpty(){
        if(front==rear && front==0) return true;
        return false;
    }
    void clear(){
        front=0;
        rear=0;
    }
    void print(){
        if(front==rear && front==0){
            cout<<"Queue underflow\n";
            return;
        } 
        cout<<"Queue is : ";
        int i=front;
        do{
            cout<<arr[i]<<" ";
            i++;
            if(i==size && i==rear){
                break;
            }else if(i==size){
                i=0;
            }
        }while(i!=rear);
        cout<<endl;
    }
};
int main() {
    Queue q(5);
    int choice=0;
    while(choice<7){
        cout<<"1.Insert   2.Remove   3.Front Element    4.Size    5.Check if Queue is empty    6.Print  7.clear 8.Exit\n";
        cin>>choice;
        switch(choice){
            case 1: int data;
                    cout<<"Enter value to be inserted : ";
                    cin>>data;
                    q.push(data);
                    break;
            case 2: q.pop();
                    break;
            case 3: q.getFront();
                    break;
            case 4: q.getSize();
                    break;
            case 5: if(q.isEmpty()) cout<<"Empty Queue\n";
                    else cout<<"Queue is not empty\n";
                    break;
            case 6: q.print();
                    break;
            case 7: q.clear();
                    break;
            default: cout<<"Exited";
        }
    }
    return 0;
}