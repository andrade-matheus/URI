#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
  int X, Y, M;
  int a, b;

  bool valido = false;

  while ((std::cin >> X >> Y >> M)) {
    for (int i = 0; i < M; i++) {
      std::cin >> a >> b;
      valido = false;

      if (X >= a) {
        if (Y >= b) {
          valido = true;
        }

      }

      if (Y >= a) {
        if (X >= b) {
          valido = true;
        }
      }

      if (valido) {
        std::cout << "Sim" << '\n';
      }else{
        std::cout << "Nao" << '\n';
      }
    }
  }
  return 0;
}
