#include <iostream>
#include <vector>
using namespace std;

int getUnique(vector<int> arr){
  int ans = 0;
  for(int i=0; i<arr.size(); i++){
    ans = ans^arr[i];
  }
  return ans;
}

int main() {
  // unique elements using vector
  int n;
  cout << "Enter n: " << endl;
  cin >> n;

  vector<int> arr(n);
  cout << "Enter unique: " << endl;
  for(int i=0; i<arr.size(); i++){
    cin >> arr[i];
  }

  int uniqueElements = getUnique(arr);
  cout << "Unique is: " << uniqueElements << endl;

  return 0;
}
