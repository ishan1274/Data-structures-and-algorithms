#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> arr{4,6,3,7,9};
  int n = arr.size();
  //Optimised Bubble sort code
  
  for(int round = 1; round<n; round++){
    
    int swapCount = 0;
    
    for(int j=0; j<n - round; j++){
     
      if(arr[j]>arr[j+1]){

        swap(arr[j], arr[j+1]);
        swapCount++;
      
      }
    
    }
    
    if(swapCount == 0){
      break;
    }
  
  }
  
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
   

  return 0;

}