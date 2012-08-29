#include <iostream>

using std::cout;
using std::endl;

int euler(int n);    //usually declare this in the header file.

int main() {
  cout<<"Hello World\n";
  cout<<"Result::"<<euler(2000)<<endl;
  return 0;
}

int euler(int n) {
  cout << "hello paraemter: " << n << endl;

  int sum = 0;
  
  for(int i = 0; i < n; ++i) {
    sum += i;
  }
  return sum;
}
