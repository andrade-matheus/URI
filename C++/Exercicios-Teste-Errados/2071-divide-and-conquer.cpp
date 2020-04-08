#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct tupla{
  int valor;
  int numero_elementos;
} ;

tupla max(tupla a, tupla b) { return (a.valor > b.valor)? a : b; }

tupla max(tupla a, tupla b, tupla c) { return max(max(a, b), c); }

tupla maxSomaEntre(vector<int> contas, int esq, int meio, int dir){
  int soma, count_elem;
  tupla soma_esq, soma_dir, resultado;

  soma = 0;
  count_elem = 0;

  soma_esq.valor = -10001;
  soma_esq.numero_elementos = 0;

  // std::cout << "MEIO = " << meio << " # ESQ = " << esq << '\n';
  for (int i = meio; i >= esq; i--) {
    soma += contas[i];
    count_elem++;

    // std::cout << "SOMA = " << soma.valor << " # SOMA_ESQ = " << soma_esq << '\n';
    if(soma >= soma_esq.valor){
      soma_esq.valor = soma;
      soma_esq.numero_elementos = count_elem;
    }
  }

  soma = 0;
  count_elem = 0;

  soma_dir.valor = -10001;
  soma_dir.numero_elementos = 0;

  // std::cout << "MEIO = " << meio+1 << " # DIR = " << dir << '\n';
  for (int i = meio+1; i <= dir; i++) {
    soma += contas[i];
    count_elem++;
    // std::cout << "SOMA = " << soma.valor << " # SOMA_DIR = " << soma_dir << '\n';
    if(soma >= soma_dir.valor){
      soma_dir.valor = soma;
      soma_dir.numero_elementos = count_elem;
    }
  }

  resultado.valor = soma_esq.valor + soma_dir.valor;
  resultado.numero_elementos = soma_esq.numero_elementos + soma_dir.numero_elementos;

  return resultado;
}

tupla maxSoma(vector<int> contas, int esq, int dir){
  tupla soma;
  if (esq == dir){
    // std::cout << "ENTROU!!!!!!!!!!!!" << '\n';
    soma.valor = contas[esq];
    soma.numero_elementos = 1;
    return soma;
  }

  int meio = (esq + dir) / 2;

  // std::cout << "MaxSoma (" << esq << ", " << meio <<") : " << maxSoma(contas, esq, meio).valor << '\n';
  // std::cout << "Max (" << meio+1 << ", " << dir <<") : " << maxSoma(contas, meio+1, dir).valor << '\n';
  // std::cout << "MaxEntre (" << esq << ", " << dir <<") : " << maxSomaEntre(contas, esq, meio, dir).valor << '\n';

  return max(maxSoma(contas, esq, meio), maxSoma(contas, meio+1, dir), maxSomaEntre(contas, esq, meio, dir));
}

int main() {
  int T, N, Q;
  int A, B;
  tupla resultado;

  std::cin >> T;

  for (int i = 0; i < T; i++) {
    // std::cout << "##############################" << '\n';
    // std::cout << "TESTE #" << i << ": "  << '\n';
    // std::cout << '\n';

    std::cin >> N;
    std::vector<int> contas(N);

    // std::cout << "VETOR LIDO: ";
    for (size_t i = 0; i < contas.size(); i++) {
      std::cin >> contas[i];
      // std::cout << contas[i] << ", ";
    }
    // std::cout << '\n';

    // std::cout << "VETOR LIDO: ";
    // for (int j = 0; j < N; j++) {
    //   std::cin >> valor_conta;
    //   contas.push_back(valor_conta);
    //
    //   std::cout << valor_conta << ", ";
    // }
    // std::cout << '\n';
    //
    // std::cout << "VETOR REAL: ";
    // for (size_t i = 0; i != contas.size(); ++i){
    //     std::cout << contas[i] << ", ";
    // }
    // std::cout << '\n';

    std::cin >> Q;
    for (int j = 0; j < Q; j++) {
      std::cin >> A >> B;

      // std::cout << "Q = " << j << " # A = " << A << " # B = " << B << '\n';

      resultado = maxSoma(contas, A-1, B-1);
      std::cout << resultado.valor << " " << resultado.numero_elementos << '\n';
      // std::cout << "RESULTADO: "<< resultado.valor << " " << resultado.numero_elementos << "\n\n";
    }
    // std::cout << '\n';
    contas.clear();
  }

  return 0;
}
