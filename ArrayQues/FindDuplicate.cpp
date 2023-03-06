#include<iostream>
#include<vector>
#include<algorithm>
/*
LEETCODE Q287 
1 <= n <= 105
a.length == n + 1
1 <= a[i] <= n
All the integers in a appear only once except for precisely one integer which appears two or more times.
-----> IN LEETCODE WE HAVE TO DO WITHOUT MODIFYING ARRAY BUT HERE WE ARE DOING BY MODIFYING IT ONLY
*/
using namespace std;
int main() {
    vector<int> a={2,5,1,4,5,3};
    int ans=-1;
    // APPROACH 1 
    /* SORT ARRAY & IF WE GOT 2 ADJACENT ELEMENT EQUAL THEN RETURN IT
    T.C = O(n logn)     S.C = O(n)

    sort(a.begin(),a.end());
    int i=0;
    while(i<a.size()-1){
        if(a[i]==a[i+1]){
            ans=a[i];
            break;
        }
        i++;
    }*/
    

    //APPROACH 2 NEGATIVE MARKING APPROACH
    /*mark nums[nums[i]] as -ve (if nums[i] is -ve then take abs)
     if nums[nums[i]] isalready -ve then nums[i] is ans
    T.C = O(n)      S.C = O(1)
    for(int i=0;i<a.size();i++){
        int index=abs(a[i]);
        if(a[index]<0){
            ans=index;
            break;
        }
        a[index]*=-1;
    }
    */

   //APPROACH 3
   /* 
   SWAP FIRST ELEMENT WITH VALUE OF ITS VALUE AS INDEX , IF THEY ARE SAME THEN RETURN
   T.C = O(n)      S.C = O(1)
   */
   while(a[0]!=a[a[0]]){
    swap(a[0],a[a[0]]);
   }
   ans=a[0];
    cout<<ans;
    return 0;
}