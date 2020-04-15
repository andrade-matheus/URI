#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <limits>
#include <iomanip>

using namespace std;

unsigned long long int fib(int n){
  int i;
  unsigned long long int res[3];
  i = 0;
  res[0] = 1;
  res[1] = 1;
  for (i = 2; i < n; i++) {
    res[i%3] = res[(i-1)%3] + res[(i-2)%3];
    // std::cout << " Res = " << res[i%3] << " " << res[(i-1)%3] << " " << res[(i-2)%3] << " " << '\n';
  }

  return res[(i-1)%3];
}

int main() {
  int t;
  unsigned long long int n = 0;
  int tamanho = 0;
  string binario;

  std::cin >> t;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (t--) {
    getline(std::cin, binario);

    tamanho = (int) binario.size();
    for (int i = 0; i < tamanho; i++) {
      n += ((binario[i] - '0') * pow(2.0, (tamanho-1) - i));
      n = n % 1500;
    }
    std::cout << setw(3) << setfill('0') << fib(n) << '\n';
    // std::cout << fib(n) << '\n';
    n = 0;
  }
  return 0;
}
