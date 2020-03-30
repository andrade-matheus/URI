#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  int i;

  std::cin >> X;

  for (i = 1; i <= X; i++) {
    if (i % 2 != 0) {
      std::cout << i << '\n';
    }
  }

  return 0;
}
