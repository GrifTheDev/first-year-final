#include <iostream>
#include <cmath>
using namespace std;
int n = 2, toc; 
int main() {
  while(n < 100000){
    toc = 0;
    for(int i = 2; i < sqrt(n)+1; i++){
      if(n % i == 0){
        toc = 1;
      }
    }
    if(toc == 0){
      cout << n << endl;
    }
    n++;
  }
  return 0;
}
