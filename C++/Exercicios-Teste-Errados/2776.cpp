#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
  int n, m, q, v;
  int maior = 0;
  int count = 1;

  while (std::cin >> n >> m) {
    std::cout << "(" << count << ")" << "## " << n << " ## "<< m << '\n';
    while (n--) {
      std::cin >> q >> v;
      std::cout << "Q = " << q << " |#| V = " << v << '\n';
      if ((m/q)*v > maior) {
        maior = (m/q)*v;
      }
    }
    std::cout << "MAIOR = " << maior << '\n';
    maior = 0;
    count++;
  }
  return 0;
}
