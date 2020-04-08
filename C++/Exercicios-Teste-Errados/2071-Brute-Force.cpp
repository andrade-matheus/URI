/*
  Uma falha tentativa de brute force o exercicio (2071), resolvido corretamente, porem, time limit exceeded.
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int T, N, Q;
  int A, B;
  int valor_conta;
  int maior = -10001;
  int soma = 0;
  int n_elementos = 0;
  std::vector<int> contas;

  std::cin >> T;

  for (int i = 0; i < T; i++) {
    std::cin >> N;
    for (int j = 0; j < N; j++) {
      std::cin >> valor_conta;
      contas.push_back(valor_conta);
    }

    std::cin >> Q;
    for (int j = 0; j < Q; j++) {
      std::cin >> A >> B;
      if (A == B) {
        std::cout << contas[A - 1] << " 1" << '\n';
      }else{
        for (int k = A-1; k < B; k++) {
          for (int l = k; l < B; l++) {
            soma += contas[l];
            if (soma >= maior) {
              maior = soma;
              if (soma == maior){
                if (n_elementos < l-k+1){
                  n_elementos = l - k + 1;
                }
              }else{
                n_elementos = l - k + 1;
              }
            }
          }
          soma = 0;
        }
        std::cout << maior << " " << n_elementos << '\n';
        maior = -10001;
        n_elementos = 0;
      }
    }
    contas.clear();
  }

  return 0;
}
