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
  // int arr[] = {1,3,4};
  // int sizea = 3;
  // int brr[] = {3,4,6};
  // int sizeb = 3;

  // vector<int> ans;

  // for(int i=0; i<sizea; i++){
  //   ans.push_back(arr[i]);
  // }
  // for(int i=0; i<sizeb; i++){
  //   ans.push_back(brr[i]);
  // }

  // cout << "Enter uunion array: " << endl;
  // for(int i=0; i<ans.size(); i++){
    
  //   cout << ans[i] << " ";
  // }
  // cout << endl;

  //INTERSECTION OF TWO ARRAYS

  vector<int> arr{1,2,4,3};
  vector<int> brr{3,4,5,6};
  vector<int> ans;

  for(int i=0; i<arr.size(); i++){
    int element = arr[i];
    for(int j=0; j<brr.size(); j++){
      if(element == brr[j]){
        ans.push_back(element);
      }
    }
  }

  //pritn ans
  for(auto value: ans){
    cout << value << "  " ;
  }
  cout << endl;
  return 0;
}
