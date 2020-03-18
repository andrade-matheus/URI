#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
  string primeira, segunda, terceira;
  string saida;

  getline(cin, primeira);
  getline(cin, segunda);
  getline(cin, terceira);

  saida = primeira + segunda + terceira + '\n';
  cout << saida;

  saida =  segunda + terceira + primeira + '\n';
  cout << saida;

  saida =  terceira + primeira + segunda + '\n';
  cout << saida;

  saida =  primeira.substr(0,10) + segunda.substr(0,10) + terceira.substr(0,10) + '\n';
  cout << saida;

  return 0;
}
