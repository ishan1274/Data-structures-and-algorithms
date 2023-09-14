#include <iostream>
#include <vector>
using namespace std;

int main() {
  // create vector
  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;
  vector<int> arr(n, 5);      //decalring array using vectors.

  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
    
  }
  cout << endl;
  

  return 0;
}