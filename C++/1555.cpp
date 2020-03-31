#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
  int i, n;
  int x, y;
  int rafael, beto, carlos;

  std::cin >> n;

  for (i = 0; i < n; i++) {
    std::cin >> x >> y;

    rafael = pow((3 * x), 2) + pow(y, 2);
    beto = 2 * (pow(x,2)) + pow((5 * y), 2);
    carlos = (-100 * x) + pow(y, 3);

    if (rafael > beto) {
      if (rafael > carlos) {
        std::cout << "Rafael ganhou" << '\n';
      }else{
        std::cout << "Carlos ganhou" << '\n';
      }
    }else if (beto > carlos) {
      std::cout << "Beto ganhou" << '\n';
    }else{
      std::cout << "Carlos ganhou" << '\n';
    }
  }

  return 0;
}
