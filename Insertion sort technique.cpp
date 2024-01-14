#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> arr{4,6,3,7,9};
  int n = arr.size();
 
  //Insertion sort code
  
  for(int round=1; round<n; round++){
    
    // step: Fetch
    int val = arr[round];
    
    // step 2 compare
    int j=round-1;
    for(; j>=0; j--){
      if(arr[j]>val){
        
        //shift
        arr[j+1] = arr[j];
      }
      else{
        
        //stop
        break;
      }
    }
    
    //copy
    arr[j+1] = val;
  }

  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }cout << endl;
  
  return 0;

}