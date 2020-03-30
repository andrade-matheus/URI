#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
  int A, B;

  std::cin >> A >> B;

  if (A % B == 0) {
    std::cout << "Sao Multiplos" << '\n';
  }else if (B % A == 0) {
    std::cout << "Sao Multiplos" << '\n';
  }else{
    std::cout << "Nao sao Multiplos" << '\n';
  }

  return 0;
}
