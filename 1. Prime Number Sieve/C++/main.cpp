#include <iostream>
using namespace std;

int main()
{
  int toReach = 100000; // 100,000

  for (int i = 2; i < toReach; i++)
  {
    bool isPrime = true;

    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        isPrime = false;
      }
    }
    if (isPrime == true) {
      cout << i << endl;
    }
  }
  return 0;
}
