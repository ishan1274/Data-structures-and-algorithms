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
  // union of two arrays
  int arr[] = {1,2,3};
  int sizea = 3;
  int brr[] = {4,5,6};
  int sizeb = 3;

  vector<int> ans;

  for(int i=0; i<sizea; i++){
    ans.push_back(arr[i]);
  }
  for(int i=0; i<sizeb; i++){
    ans.push_back(brr[i]);
  }

  cout << "Enter uunion array: " << endl;
  for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
