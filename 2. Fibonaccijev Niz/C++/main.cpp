#include <iostream>

using namespace std;
int a = 1, b = 0, c; 
int main() {
  while(a <= 100000){
    cout << a << endl;
    c = a;
    a += b;
    b = c;
  }
  return 0;
}
