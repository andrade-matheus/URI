#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int i;

  std::cin >> N;

  for (i = 1; i <= N; i++) {
    if (N % i == 0) {
      std::cout << i << '\n';
    }
  }

  return 0;
}
