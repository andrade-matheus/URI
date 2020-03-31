#include <bits/stdc++.h>
using namespace std;

int main() {
  int i;
  int x;

  for (i = 0; i < 10; i++) {
    std::cin >> x;
    if(x <= 0){
      std::cout << "X[" << i << "] = 1" << '\n';
    }else{
      std::cout << "X[" << i << "] = " << x << '\n';
    }
  }

  return 0;
}
