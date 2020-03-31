#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, t, n;
  long int resultado;

  std::cin >> t;

  for (i = 0; i < t; i++) {
    std::cin >> n;
    resultado = pow(2, n) -1;
    std::cout << resultado << '\n';
  }
  return 0;
}
