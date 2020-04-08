#include <bits/stdc++.h>
using namespace std;

int main() {
  double x, y;
  double porcentagem;

  std::cout << std::fixed;
  std::cout << std::setprecision(2);

  std::cin >> x >> y;
  porcentagem = ((y - x) / x) * 100;
  std::cout << "Projeto 1:" << '\n';
  std::cout << "Percentual dos juros da aplicacao: " << porcentagem << " %" << '\n';
  std::cout << "" << '\n';

  std::cin >> x >> y;
  porcentagem = ((y - x) / x) * 100;
  std::cout << "Projeto 2:" << '\n';
  std::cout << "Percentual dos juros da aplicacao: " << porcentagem << " %" << '\n';
  std::cout << "" << '\n';

  std::cin >> x >> y;
  porcentagem = ((y - x) / x) * 100;
  std::cout << "Projeto 3:" << '\n';
  std::cout << "Percentual dos juros da aplicacao: " << porcentagem << " %" << '\n';
  std::cout << "" << '\n';

  return 0;
}
