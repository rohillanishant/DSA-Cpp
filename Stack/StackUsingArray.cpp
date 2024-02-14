#include<iostream>
using namespace std;
class Stack{
    private:
    int *arr;
    int top;
    int size;
    public:
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    void push(int data){
        if(top==size-1){
            cout<<"Stack Overflow\n";
            return;
        }
        top++;
        arr[top]=data;
    }
    void pop(){
        if(top==-1) {
            cout<<"Stack Underflow\n";
            return;
        }
        top--;
    }
    void getTop(){
        if(top==-1){
            cout<<"Stack Underflow\n";
            return;
        }
        cout<<"Element at top is "<<arr[top]<<"\n";
    }
    void getSize(){
        cout<<"Size of stack is "<<top+1<<"\n";
    }
    bool isEmpty(){
        if(top==-1) return true;
        return false;
    }
    void print(){
        if(top==-1){
            cout<<"Stack underflow\n";
            return;
        } 
        cout<<"Stack is : ";
        while(top>-1){
            cout<<arr[top]<<" ";
            top--;
        }
    }
};
int main() {
    Stack s(10);
    int choice=0;
    while(choice<6){
        cout<<"1.Insert   2.Remove   3.Top Element    4.Size    5.Check if stack is empty    6.Exit\n";
        cin>>choice;
        switch(choice){
            case 1: int data;
                    cout<<"Enter value to be inserted : ";
                    cin>>data;
                    s.push(data);
                    break;
            case 2: s.pop();
                    break;
            case 3: s.getTop();
                    break;
            case 4: s.getSize();
                    break;
            case 5: if(s.isEmpty()) cout<<"Empty stack\n";
                    else cout<<"Stack is not empty\n";
                    break;
            default: cout<<"Exited";
        }
    }
    return 0;
}