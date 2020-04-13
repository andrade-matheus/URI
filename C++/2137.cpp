#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<iomanip>

using namespace std;

int main() {
  int N;
  int aux;
  std::vector<int> entrada;

  while (std::cin >> N) {
    for (int i = 0; i < N; i++) {
      std::cin >> aux;
      entrada.push_back(aux);
    }
    sort(entrada.begin(), entrada.end());
    for (auto i = entrada.begin(); i != entrada.end(); ++i) {
      std::cout << setw(4) << setfill('0') << *i << '\n';
    }
    entrada.clear();
  }

  return 0;
}
