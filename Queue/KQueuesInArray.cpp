#include<iostream>
using namespace std;
class KQueue{
    public:
    int n,k,freespot;
    int *arr,*front,*rear,*next;
    KQueue(int n,int k){
        this->n=n;
        this->k=k;
        freespot=0;
        arr=new int[n];
        next=new int[n];
        front=new int[k];
        rear=new int[k];
        for(int i=0;i<k;i++){
            front[i]=-1;
            rear[i]=-1;
        }
        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
    }
    bool push(int x,int qi){
        if(freespot==-1){       //overlow
            return false;
        }
        int index=freespot;
        freespot=next[index];
        if(front[qi]==-1){
            front[qi]=index;
        }else{
            next[rear[qi]]=index;
        }
        next[index]=-1;
        rear[qi]=index;
        arr[index]=x;
        return true;
    }
    int pop(int qi){
        if(front[qi]==-1) return -1;
        int index=front[q[i]];
        front[qi]=next[index];
        next[index]=freespot;
        freespot=index;
        return arr[index];
    }
    ~KQueue(){
        delete[] arr;
        delete[] front;
        delete[] rear;
        delete[] next;
    }
}
int main() {
    KQueue kq(8,3);
    cout<<kq.push(1,0)<<endl;
    cout<<kq.push(2,0)<<endl;
    cout<<kq.push(3,0)<<endl;
    cout<<kq.push(10,1)<<endl;
    cout<<kq.pop(0)<<endl;
    cout<<kq.push(100,2)<<endl;
    cout<<kq.push(20,1)<<endl;
    cout<<kq.push(110,2)<<endl;
    return 0;
}