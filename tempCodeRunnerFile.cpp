#include <iostream>
using namespace std;
int fun(int x,int y, int z=0);
int main() {
  cout<<fun(10,15,5);
  return 0;
}
int fun(int x,int y,int z){
    cout<<x<<" "<<y<<" "<<z<<endl;
    return x+y;
}