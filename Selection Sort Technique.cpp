#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> arr{4,6,3,7,9};
  int n = arr.size();
  //selection sort code

  for(int i=0; i<n-1; i++){
    int minIndex = i;
    for(int j=i+1; j<n; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }

  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;

}