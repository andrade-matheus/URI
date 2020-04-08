#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef struct tupla{
  long long int valor;
  int numero_elementos;
} tupla;

int main() {
  int T, N, Q, A, B, contas[100000];
  
  std::cin >> T;
  for (int i = 0; i < T; i++) {
    std::cin >> N;
    for (int i = 0; i < N; i++) {
      std::cin >> contas[i];
    }
    std::cin >> Q;
    for (int j = 0; j < Q; j++) {
      std::cin >> A >> B;
      if (A == B) {
        tupla max_temp;
        max_temp.valor = contas[A-1];
        max_temp.numero_elementos = 1;
        std::cout << max_temp.valor << " " << max_temp.numero_elementos << '\n';
      }else{
        tupla max_atual, max_temp;
        int inicio, fim;

        inicio = A-1;
        fim = B-1;

        max_atual.valor = contas[inicio];
        max_atual.numero_elementos = 1;

        max_temp.valor = contas[inicio];
        max_temp.numero_elementos = 1;

        for (int i = inicio+1; i <= fim; i++) {
          if (contas[i] > (contas[i] + max_atual.valor)) {
            max_atual.valor = contas[i];
            max_atual.numero_elementos = 1;
          }else{
            max_atual.valor += contas[i];
            max_atual.numero_elementos++;
          }

          if (max_atual.valor > max_temp.valor) {
            max_temp.valor = max_atual.valor;
            max_temp.numero_elementos = max_atual.numero_elementos;
          }else if (max_atual.valor == max_temp.valor) {
            if (max_atual.numero_elementos > max_temp.numero_elementos) {
              max_temp.valor = max_atual.valor;
              max_temp.numero_elementos = max_atual.numero_elementos;
            }
          }
        }
        std::cout << max_temp.valor << " " << max_temp.numero_elementos << '\n';
      }
    }
  }

  return 0;
}
