#include <iostream>
using namespace std;

void incrementIt(int &k){      //k is the refrence  variable.
                               // k is another name of n in other words , k and n are same. changes in k will indicate 
                              //changes in n.
  k=k*2;
  
}

int main() {
  int n;
  cin >> n;
  incrementIt(n);
  cout << n << endl;
}