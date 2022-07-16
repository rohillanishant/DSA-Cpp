#include<iostream>
using namespace std;
void reverse(string name) {
    if(name.length()==0) {
        return;
    }
    string rest=name.substr(1);
    reverse(rest);
    cout<<name[0];
}
int main() {
    reverse("Binod");
    return 0;
}