#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {

  int i;
  int valor = 3;
  int maior = 0;
  string numero;

  while (std::cin >> numero) {
    for ( i = 0; i < numero.length(); i++) {
      valor = numero[i];
      if (valor > maior) {
        maior = valor;
      }
    }

    if (maior < 58) {
      maior = maior - 48 + 1;
    }else if (maior < 91) {
      maior = maior - 48 - 7 + 1;
    }else{
      maior = maior - 48 - 7 - 6 + 1;
    }

    // std::cout << valor << '\n';
    std::cout << maior << '\n';
  }

  return 0;
}
