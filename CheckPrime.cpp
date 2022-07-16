/* TO CHECK IF GIVEN NO IS PRIME OR NOT */
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,x=0;
    cout<<" ENTER NO";
    cin>>n;
    for(int i=2;i<sqrt(n);i++) {                        // IF a no is not divided by any no less than its square root ,
        if(n%i==0) {                             //         then it is also not divided by any no greater than its square root 
            x++;
            break;
        }
    }
    if(n==1 || x==1) {
        cout<<"IT IS NOT A PRIME NO";
    }
      else if(x==0) {
          cout<<"IT IS A PRIME NO";
      }
      return 0;
}