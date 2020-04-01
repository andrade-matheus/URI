#include <bits/stdc++.h>
using namespace std;

unsigned long long int fat(int n){ //Aqui tambem
  if (n == 0) {
    return 1;
  }
  return n * fat(n-1);
}

int main() {
  int a, b;
  unsigned long long int resultado; //Tem que ser LONG INT. (edit: não basta ser só long...)

  while (std::cin >> a >> b) {
    if (a == b) {
      resultado = 2 * (fat(a));
    }
    else{
      resultado = fat(a) + fat(b);
    }
    std::cout << resultado << '\n';
  }
  return 0;
}
