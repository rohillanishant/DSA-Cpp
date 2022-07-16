/* SELECTION SORTING
Enter no of elements in array5
Enter elements99 55 18 17 45

 SORTED ARRAY = 17 18 45 55 99
  */
#include<iostream>
#include<climits>
using namespace std;
int sort(int n,int a[]) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            int min=INT_MAX;
            if(a[j]<min) {
                min=a[j];
            }
            a[i]=min;
        }
    }
    cout<<"\n SORTED ARRAY = ";
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
int main() {
    int n;
    cout<<"Enter no of elements in array";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(n,a);
    return 0;
}