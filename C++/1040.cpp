#include <bits/stdc++.h>
using namespace std;

int main() {
  float  N1, N2, N3, N4;
  float media = 0;
  float exame;

  std::cin >> N1 >> N2 >> N3 >> N4;

  media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1))/10;

  std::cout << std::fixed;
  std::cout << std::setprecision(1);
  std::cout << "Media: " << media << '\n';

  if (media >= 7.0) {
    std::cout << "Aluno aprovado." << '\n';
  }else if (media < 5.0) {
    std::cout << "Aluno reprovado." << '\n';
  }else{
    std::cout << "Aluno em exame." << '\n';
    std::cin >> exame;

    std::cout << "Nota do exame: " << exame << '\n';

    media = (media + exame) / 2;

    if (media >= 5.0) {
      std::cout << "Aluno aprovado." << '\n';
    }else{
      std::cout << "Aluno reprovado." << '\n';
    }
    std::cout << "Media final: " << media << '\n';
  }

  return 0;
}
