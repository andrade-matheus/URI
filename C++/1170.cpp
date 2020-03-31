#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {

  int n;
  int count;
  float c;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> c;
    for (count = 0 ; c > 1; count ++) {
      c /=  2.0;
    }
    std::cout << count << " dias" << '\n';
  }

  return 0;
}
