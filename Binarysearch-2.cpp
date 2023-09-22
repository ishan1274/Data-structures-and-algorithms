#include <iostream>
#include<vector>
using namespace std;

int firstOccrence(vector<int> arr, int target){
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + ((e - s) / 2);
  int ans = -1;

  while(s <= e){
    if(arr[mid] == target){
      ans = mid;
      s = mid + 1;
    }
    else if(target < arr[mid]){
      e = mid - 1;
    }
    else if(target > arr[mid]){
      s = mid + 1;
    }
    mid = s + ((e -s) / 2);
  }

  return ans;
}

int main() {
  vector<int> arr{1,2,3,3,3,4,4,4,4,5,5,6};
  int target = 3;

  int ans = firstOccrence(arr, target);
  cout << "ans is " << ans << endl;  
  return 0;
}