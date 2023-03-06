#include<iostream>
#include<vector>
using namespace std;
void Waveprint(vector<vector<int>> a){
    int i=0,j=0;
    while(true){
        cout<<a[i][j]<<" ";
        if(j%2==0){
            i++;
        }else {
            i--;
        }
        if(i==a.size() && j!=a[0].size()){
            i--;
            j++;
        }
        if(i==-1){
            i++;
            j++;
        }
        if(j%2==0){
            if(j==a[0].size()  && i==a.size()-1){
                break;
            }
        }else{
            if(j==a[0].size() && i==0){
                break;
            }
        }
    }
}
int main() {
    vector<vector<int>> a ={{1,2,3},{4,5,6},{7,8,9},{11,12,13}};
    Waveprint(a);
    return 0;
}