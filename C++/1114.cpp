#include <bits/stdc++.h>
using namespace std;

int main() {
  int senha, entrada;

  senha = 2002;

  std::cin >> entrada;

  while (senha != entrada){
    std::cout << "Senha Invalida" << '\n';
    std::cin >> entrada;
  }

  std::cout << "Acesso Permitido" << '\n';

  return 0;
}
