/* Output:
 To find largest word and its length
Enter length of array10
hgdhsjdenter Sentence 
do or die 
ans=3
die
Enter length of array19
enter Sentence 
My name is Nishant 
ans=7  
Nishant
*/
#include<iostream>
using namespace std;
int main() {
    int n,x=0,ans=0,i=0,s=0,st=0;
    cout<<"Enter length of array";
    cin>>n;
    cin.ignore();
    char a[n];
    cout<<"enter Sentence \n";
    cin.getline(a,n);
    cin.ignore();
    while (1) {
        if(a[i]==' ' || a[i]=='\0') {
            if (x>ans) {
                st=s;
                ans=x;
            }
            x=0;
            s=i+1;
        }
        else {
            x++;
        }
        if (a[i]=='\0') {
            break;
        }
        i++;
    }
    cout<<"ans="<<ans<<"\n";
    for (int i=0;i<ans;i++) {
        cout<<a[i+st];
    }
    return 0;
}