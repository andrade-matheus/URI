#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
  int a, b;
  int resultado;
  int carry = 0;
  bool ifcarry = false;

  std::cin >> a >> b;

  while ((a != 0) || (b != 0)) {
    while ((a >= 1) || (b >= 1)) {

      if (ifcarry) {
        resultado = (a % 10) + (b % 10) + 1;
      }else{
        resultado = (a % 10) + (b % 10);
      }

      if (resultado >= 10) {
        carry++;
        ifcarry = true;
      }else{
        ifcarry = false;
      }

      a /= 10;
      b /= 10;
    }

    if(carry == 0){
      std::cout << "No carry operation." << '\n';
    }else if (carry == 1) {
      std::cout << carry << " carry operation." << '\n';
    }else{
      std::cout << carry << " carry operations." << '\n';
    }

    std::cin >> a >> b;
    carry = 0;
    ifcarry = false;
  }
  return 0;
}
