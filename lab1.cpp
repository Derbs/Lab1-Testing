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
  bool mod7 = 0,mod5 = 0;
  for(int i = 0; i < n; ++i) {
    mod7 = !(i%7==0);
    mod5 = !(i%5==0);
    if((mod7^mod5) == 1) {
       sum += i;
    }
  }
  return sum;
}
