#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){   // Function for the linear search.
  for(int i=0; i<size; i++){
      if(target == arr[i]){
        return i;
      }
  }
  return -1;
    
}

int main() {
  int arr[]={1,2,3,4,5};
  int size=5;
  int target=5;

  int result = linearSearch(arr, size, target); // We created the linearSearch function it calls the function.
  if(result == -1){                             // -1 denotes false value
    cout << "Not found" << endl;
  }
  else{
    cout << "Found " << "at index " << result << endl;  
  }
  return 0;
  }