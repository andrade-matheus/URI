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

using namespace std;

int main() {
  int N;
  int n1, d1;
  int n2, d2;
  int n_res, d_res;
  int maior_divisor_comum;
  char op;
  char aux;

  std::cin >> N;

  while (N--) {
    std::cin >> n1 >> aux >> d1;
    std::cin >> op;
    std::cin >> n2 >> aux >> d2;

    if (op == '+') {
      n_res = (n1*d2) + (n2*d1);
      d_res = (d1*d2);
    }else if (op == '-') {
      n_res = (n1*d2) - (n2*d1);
      d_res = (d1*d2);
    }else if (op == '*') {
      n_res = (n1*n2);
      d_res = (d1*d2);
    }else if (op == '/') {
      n_res = (n1*d2);
      d_res = (n2*d1);
    }
    maior_divisor_comum = __gcd(n_res, d_res);
    if(maior_divisor_comum < 0){
      maior_divisor_comum *= -1;
    }

    std::cout << n_res << '/' << d_res;
    std::cout << " = ";

    n_res /= maior_divisor_comum;
    d_res /= maior_divisor_comum;

    std::cout << n_res << '/' << d_res << '\n';


  }

  return 0;
}
