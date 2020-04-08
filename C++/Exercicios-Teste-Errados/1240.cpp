#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {

  int n;
  string A, B;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
      std::cin >> A >> B;
      if (A.find(B) != std::string::npos) { //npos é uma "representação de final da string", que a função find retorna caso não encontrado.
        std::cout << "encaixa" << '\n';
      }else{
        std::cout << "nao encaixa" << '\n';
      }
  }

  return 0;
}
