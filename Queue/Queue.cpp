#include<iostream>
#include<queue>
using namespace std;
void insert(queue<int>& q){
    int n;
    cout<<"Enter number to insert/push in queue : \t";
    cin>>n;
    q.push(n);
}
void remove(queue<int>& q){
    if(q.empty()){
        cout<<"queue is already empty\n";
        return;
    }
    cout<<"Element removed from front was : "<<q.front()<<"\n";
    q.pop();
}
void print(queue<int> &q){
    if(queue.empty()){
        cout<<"Queue is empty";
        return;
    }
    cout<<"queue is : ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n queue Cleared\n";
}
void isEmpty(queue<int>& q){
    if(q.empty()) cout<<"queue is empty\n";
    else cout<<"queue is not empty\n";
}
int main() {
    queue<int> q;
    int choice=0;
    while(choice<6){
        cout<<"1.Insert   2.Remove   3.Front Element    4.Print & Clear queue    5.Check if queue is empty    6.Exit\n";
        cin>>choice;
        switch(choice){
            case 1: insert(q);
                    break;
            case 2: remove(q);
                    break;
            case 3: cout<<"Front element is "<<q.front()<<"\n";
                    break;
            case 4: print(q);
                    break;
            case 5: isEmpty(q);
                    break;
            default: cout<<"Exited";
        }
    }
    return 0;
}