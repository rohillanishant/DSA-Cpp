#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* link;
	Node(int n){
		this->data = n;
		this->link = NULL;
	}
};
class Stack {
	Node* top;
public:
	Stack() { top = NULL; }
	void push(int data){
		Node* temp = new Node(data);
        if (!temp) {
			cout << "\nStack Overflow";
			return;
		}
		temp->data = data;
		temp->link = top;
		top = temp;
	}
	bool isEmpty(){
		return top == NULL;
	}
	void getTop(){
		if (!isEmpty())
			cout<<"Top element is "<<top->data<<"\n";
		else cout<<"Empty stack\n";
	}
	void pop(){
		Node* temp;
		if (top == NULL) {
			cout << "\nStack Underflow" << endl;
			return;
		}
		else {
			temp = top;
			top = top->link;
			free(temp);
		}
	}
	void display(){
		Node* temp;
		if (top == NULL) {
			cout << "\nStack Underflow";
		}
		else {
			temp = top;
			while (temp != NULL) {
				cout << temp->data;
				temp = temp->link;
				if (temp != NULL)
					cout << " -> ";
			}
		}
		cout<<"\n";
	}
};
int main(){
	Stack s;
    int choice=0;
    while(choice<6){
        cout<<"1.Insert   2.Remove   3.Top Element   4.print  5.Check if stack is empty    6.Exit\n";
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
            case 4: s.display();
                    break;
            case 5: if(s.isEmpty()) cout<<"Empty stack\n";
                    else cout<<"Stack is not empty\n";
                    break;
            default: cout<<"Exited";
        }
    }
	return 0;
}
