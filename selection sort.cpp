#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr{1,5,3,7,8};
  int n = arr.size();
  
  // SELECTION SORTING
  for(int i=0; i<n-1; i++){
    int minIndex = i;
    
    for(int j=i+1; j<n; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;                     // we will store the element.
      }
    }
    swap(arr[i] , arr[minIndex]);        // swapping
  }

  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}