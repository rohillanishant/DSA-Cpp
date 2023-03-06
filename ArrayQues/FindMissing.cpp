#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Array size=n 
    // 1 <= a[i] <=n
    vector<int> a={3,1,5,2,5};
    int ans=-1;
    
   // Approach 1 NEGATIVE MARKING APPROACH
   //go to index a[i], if it is already -ve go ahead ,else make it -ve and go ahead.
   /* Array size= n(0,1....n-1) , 1<=a[i]<=n
   
    //T.C = O(n)      S.C = O(1)
    for(int i=0;i<a.size();i++){
        int index=abs(a[i])-1;
        if(a[index]>0){
            a[index]*=-1;
        }
    }
    for(int i=0;i<a.size();i++){
        if(a[i]>0){
            ans=i+1;
            break;
        }
    }*/
   //Approach 2   SORT & SWAP
   //T.C = O(n)     S.C= O(1)
  int i=0;
  while(i<a.size()){
    int index=a[i]-1;
    if(a[i]!=a[index]){                     //index is not equal to its value, so swap
        swap(a[i],a[index]);
    }else{
        i++;
    }
  }
  for(int i=0;i<a.size();i++){
    if(a[i]!=i+1){
        ans=i+1;
        break;
    }
  }
    cout<<ans;
    return 0;
}
