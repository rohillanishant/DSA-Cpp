#include <iostream>
using namespace std;
int partition(int arr[], int s, int e) {      //first element as pivot
  //step1: chooose pivotelement
  int pivotIndex = s;
  int pivotElement = arr[s];

  //step2: find right positio for pivot Element and place it there
  int count = 0;
  for(int i=s+1; i<=e; i++) {
    if(arr[i] <= pivotElement) {
      count++;
    }
  }
  //jab main loop se bahar hua, toh mere paas pivot ki right position ka index ready h 
  int rightIndex = s + count;
  swap(arr[pivotIndex], arr[rightIndex]);
  pivotIndex = rightIndex;

  //Step3: left me chote and right me bade
  int i = s;
  int j = e;

  while( i < pivotIndex && j > pivotIndex) {
    while(arr[i] <= pivotElement) {
      i++;
    }
    while( arr[j] > pivotElement){
      j--;
    }

    //2 case ho sakte h -> 
    //A-> you found the elements to swap
    //B-> no need to swap
    if(i < pivotIndex && j > pivotIndex)
      swap(arr[i],arr[j]);
  }
  return pivotIndex;
}
int partition2(int arr[], int s, int e) {   //last element as pivot
  //step1: chooose pivotelement
  int pivotIndex = e;
  int pivotElement = arr[e];

  //step2: find right positio for pivot Element and place it there
  int count = 0;
  for(int i=s; i<e; i++) {
    if(arr[i] <= pivotElement) {
      count++;
    }
  }
  //jab main loop se bahar hua, toh mere paas pivot ki right position ka index ready h 
  int rightIndex = s + count;
  swap(arr[pivotIndex], arr[rightIndex]);
  pivotIndex = rightIndex;

  //Step3: left me chote and right me bade
  int i = s;
  int j = e;

  while( i < pivotIndex && j > pivotIndex) {
    while(arr[i] < pivotElement) {
      i++;
    }
    while( arr[j] >= pivotElement){
      j--;
    }

    //2 case ho sakte h -> 
    //A-> you found the elements to swap
    //B-> no need to swap
    if(i < pivotIndex && j > pivotIndex)
      swap(arr[i],arr[j]);
  }
  return pivotIndex;
}

int partition3(int arr[],int s,int e){      //2nd Method ,same T.C
  int i=s-1,j=;
  int pivot=e;
  while(j<e){
      if(arr[j]<arr[pivot]){
          i++;
          swap(arr[i],arr[j]);
      }
      j++;
  }
  i++;
  swap(arr[i],arr[pivot]);
  pivot=i;
  return pivot;
}
void quickSort(int arr[], int s, int e) {
  //base case
  if(s >= e)
    return ;

  //partition logic, return pivotIndex
  int p = partition2(arr, s, e);

  //recursive calls
  //pivot element -> left
  quickSort(arr, s, p-1);

  //pivot element -> right
  quickSort(arr, p+1, e);

}
int main() {
  int arr[] = {8,15,3,4,2,5,9,7,6,89,45,24};
  int n = 12;

  int s = 0;
  int e = n-1;
  quickSort(arr, s, e);

  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}