#include <iostream>
using namespace std;

bool checkEven(int n) {
  if (n % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int n;
  cout << "Enter the value of n : " << endl;
  cin >> n;

  bool isEven = checkEven(n);
  if (isEven) {
    cout << "the input is even" << endl;
  } else {
    cout << "the input is odd" << endl;
  }
}