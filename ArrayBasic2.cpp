#include <iostream>
using namespace std;

// void printarray(int arr[], int size){
//   for(int i=0; i<size; i++){
//     cout << arr[i] << " ";
    
//   }
//   cout << endl;
// }

// void inc(int arr[], int size){
//   arr[0] = 10;
//   arr[1] = 20;
//   arr[2] = 30;
//   printarray(arr, size);
// }
// bool find(int arr[], int size, int key){           // find function for linear search.
//   for(int i=0; i<size; i++){
//     if(arr[i] == key)
//       return true;
//   }
//   return false;
// }

int main() {
  // intialisation of array
  //  int arr[8] = {8,7,6,5,4,3,70,77};
  // int arr[4] = {1, 2, 3, 4}; // integer array with size 4
  // char brr[10] = {'a', 'b'}; // character array with size 10

  // index and access in array
  // int crr[] = {1, 2, 3, 4, 5, 6};
  // for (int i = 0; i < 6; i++) {
  //   cout << crr[i] << " " ; // prints all the number 1,2,3,4,5,6 using for
  //   loop.
  // }

  // intialize array using loop and printing doubles of an all array elements
  // int arr[500];
  // int n;
  // cout << "how many numbers you wanr to add" << endl;
  // cin >> n;

  // cout << "Enter the numbers" << endl;
  // for(int i=0; i<n; i++){
  //   cin >> arr[i];
  // }

  // cout << "Doubles: ";
  // for(int i=0; i<n; i++){
  //   cout << 2*arr[i] << " ";
  // }
  
  // updating array elements
  // int arr[5] = {1,2,3,4,5};

  // for(int i=0; i<5; i++){
  //   arr[i] = 1;              //updation of array elements                       memset?
  // }

  // for(int i=0; i<5; i++){
  //   cout << arr[i] << " ";   // printing array elements
  // }
  
  //ARRAY AND FUNCTION
  // int arr[] = {1,2,3};
  // int size = 3;

  // inc(arr, size);
  // printarray(arr, size);

  //LINEAR SEARCH USING ARRAYS
  // int arr[] = {1,2,3,4};
  // int size = 4;

  // cout << "Enter the key to be found " << endl;
  // int key;
  // cin >> key;

  // if(find(arr,size,key)){
  //   cout << "Found" << endl;
  // }
  // else{
  //   cout << "Not found" << endl;
  // }

  //To find the number of zeroes and ones in array
  // int arr[] = {0,1,0,0,0,0,1,1,0,1};
  // int size = 10;

  // int numZero = 0;
  // int numOne= 0;

  // for(int i=0; i<size; i++){
  //   if(arr[] ==0){
  //     numZero++;
  //   }
  //   if(arr[] ==0){
  //     numOne++;
  //   }
  
  // TO COUNT THE NUMBER OF 0 AND 1
  int arr[] = {0,1,0,0,0,0,1,1,0,1};
  int size = 10;

  int numZero = 0;
  int numOne= 0;

  for(int i=0; i<size; i++){
    if(arr[i] ==0){
      numZero++;
    }
    if(arr[i] ==0){
      numOne++;
    }
  }

  cout << "The number of zeroes" << endl;
  cout << "The number of ones " << endl;

  return 0;
}