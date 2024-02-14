/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Stack{
  private:
  int *arr;
  int size;
  int top1;
  int top2;
  public:
  Stack(int size){
      this->size=size;
      top1=-1;
      top2=size;
      arr=new int[size];
  }
  void push1(){
      if(top1==top2-1){
          cout<<"No space available\n";
          return;
      }
      cout<<"Enter value to be added  ";
      int data;
      cin>>data;
      top1++;
      arr[top1]=data;
  }
  void pop1(){
      if(top1==-1){
          cout<<"Underflow\n";
          return;
      }
      top1--;
  }
  void getTop1(){
      if(top1==-1){
          cout<<"Underflow\n";
          return;
      }
      cout<<"Top element is "<<arr[top1]<<"\n";
  }
  void isEmpty1(){
      if(top1==-1){
          cout<<"Stack1 is empty\n";
          return;
      }
      cout<<"Stack1 is not empty\n";
  }
  void push2(){
      if(top1==top2-1){
          cout<<"No space available\n";
          return;
      }
      cout<<"Enter value to be added  ";
      int data;
      cin>>data;
      top2--;
      arr[top2]=data;
  }
  void pop2(){
      if(top2==size){
          cout<<"Underflow\n";
          return;
      }
      top2++;
  }
  void getTop2(){
      if(top2==size){
          cout<<"Underflow\n";
          return;
      }
      cout<<"Top element is "<<arr[top2]<<"\n";
  }
  void isEmpty2(){
      if(top2==size){
          cout<<"Stack2 is empty\n";
          return;
      }
      cout<<"Stack2 is not empty\n";
  }
};
int main(){
    Stack s(10);
    int choice=1;
    while(choice<9 && choice>0){
        cout<<"For Stack1 : 1.Insert     2.Pop    3.Top    4.Is Empty\n";
        cout<<"For Stack2 : 5.Insert     6.Pop    7.Top    8.Is Empty\n";
        cout<<"Any other to exit\n";
        cin>>choice;
        switch(choice){
            case 1: s.push1();
                    break;
            case 2: s.pop1();
                    break;
            case 3: s.getTop1();
                    break;
            case 4: s.isEmpty1();
                    break;
            case 5: s.push2();
                    break;
            case 6: s.pop2();
                    break;
            case 7: s.getTop2();
                    break;
            case 8: s.isEmpty2();
                    break;
            default: cout<<"Exitted";
        }
    }
    return 0;
}
