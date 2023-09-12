#include <iostream>
using namespace std;

int incrementBy1(int m){ // nick name is created of m in the main function.
  m = m+1;
  return m;
  
  
}
int main() {
  int m;
  
  cin >> m;
  incrementBy1(m);
  cout <<  m << endl;

  
  
}

// out put will , m = 5
//5
//5