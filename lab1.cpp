#include <iostream>

using std::cout;
using std::endl;

int euler(int n, int x, int y);    //usually declare this in the header file.

int main() {
  cout<<"Hello World\n";
  cout<<"Result::"<<euler(1000,3,5)<<endl;
  return 0;
}

int euler(int n, int x, int y) {
  int sum = 0;
  bool modx = 0,mody = 0;
  for(int i = 0; i < n; ++i) {
    modx = !(i%x==0);
    mody = !(i%y==0);
    if((modx^mody) == 1) {
       sum += i;
    }
  }
  return sum;
}
