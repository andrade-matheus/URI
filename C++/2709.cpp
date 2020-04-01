#include <bits/stdc++.h>
using namespace std;

bool primo(int n){
  int raiz_n;
  raiz_n = (int) sqrt(n);

  if (n <= 1) {
    return false;
  }else{
      for (int i = 2; i <= raiz_n; i++) {
        if (n % i == 0) {
          return false;
        }
      }
  }
  return true;
}

int main() {
  int M, N;
  int valor_moedas;
  int soma = 0;
  int salto_count = 0;
  std::vector<int> moedas;

  while (std::cin >> M) {
    for (int i = 0; i < M; i++) {
      std::cin >> valor_moedas;
      moedas.push_back(valor_moedas);
    }

    std::cin >> N;

    for (auto i = moedas.rbegin(); i != moedas.rend(); ++i){
        if(salto_count % N == 0){
          soma += *i;
        }
        salto_count++;
    }

    if (primo(soma)) {
      std::cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << '\n';
    }else{
      std::cout << "Bad boy! I’ll hit you." << '\n';
    }
  }
  return 0;
}
