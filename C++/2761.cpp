#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
  int inteira;
  float real;
  char caracter;
  string frase;

  cin >> inteira;
  cin >> real;
  cin >> caracter;

  getline(cin, frase);

  frase = frase.substr(1, frase.length()); //Necessario para remover um espço que o getline não ignorava

  std::cout << std::fixed;
  std::cout << std::setprecision(6);

  cout << inteira << real << caracter << frase << endl;

  cout << inteira << "\t" << real << "\t" << caracter << "\t" << frase << endl;

  printf("%10d%10.6f%10c%10s\n", inteira, real, caracter, frase.c_str());

  return 0;
}
