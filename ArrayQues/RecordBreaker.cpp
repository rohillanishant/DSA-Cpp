/*RECORD BREAKER
CONDITION - 1) no of visitors on all previous days are less than today
            2) no of visitors on next day is also less than today
OUTPUT:-
Enter no of days7
Enter visitors' no each day1 0 5 3 7 2 8
Day 1 is Record Breaking Day 
Day 3 is Record Breaking Day 
Day 5 is Record Breaking Day 
Day 7 is Record Breaking Day 
*/
#include<iostream>
using namespace std;
int main() {
    int n,mx=0;
    cout<<"Enter no of days";
    cin>>n;
    int a[n];
    a[n]=0;
    cout<<"Enter visitors' no each day";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        if((a[i]>mx) && (a[i]>a[i+1])) {
            cout<<"Day "<<i+1<<" is Record Breaking Day \n";
        }
        mx= max(mx,a[i]);
    }
    return 0;
}