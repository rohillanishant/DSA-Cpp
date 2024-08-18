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
    void push(int data){
        if(rear==size){
            cout<<"Queue Overflow\n";
            return;
        }
        arr[rear]=data;
        rear++;
    }
    void pop(){
        if(front==rear) {
            cout<<"Queue Underflow\n";
            return;
        }
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
    }
    void getFront(){
        if(front==rear){
            cout<<"Queue Underflow\n";
            return;
        }
        cout<<"Element at front is "<<arr[front]<<"\n";
    }
    void getSize(){
        cout<<"Size of Queue is "<<rear-front<<"\n";
    }
    bool isEmpty(){
        if(front==rear) return true;
        return false;
    }
    void print(){
        if(front==rear){
            cout<<"Queue underflow\n";
            return;
        } 
        cout<<"Queue is : ";
        int i=front;
        while(rear>i){
            cout<<arr[i]<<" ";
            i++;
        }
        cout<<endl;
    }
    void clear(){
        front=0;
        rear=0;
    }
};
int main() {
    Queue q(10);
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