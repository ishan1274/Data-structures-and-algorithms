#include <iostream>
using namespace std;

void findSumOfRows(int arr[][3], int rows, int cols){

  cout << "Sum of rows" << endl;
  for(int i=0; i<rows; i++){
    int sum = 0;
    for(int j=0; j<cols; j++){
      sum = sum + arr[j][i];
    }
    cout << sum << " ";
  }
cout << endl;
}

int main() {

  int arr[3][3];
  int rows = 3;
  int cols = 3;

  cout << "Input array" << endl;
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin >> arr[i][j];
    }
  }

findSumOfRows(arr, rows, cols);
  
  
  
}