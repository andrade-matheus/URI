#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,j,n,m;
  int cont;
  bool match;
  string mensagem, crib;

  cont = 0;
  mensagem = ' ';
  crib = ' ';
  match = false;

  cin >> mensagem;
  cin >> crib;

  n = mensagem.size();
  m = crib.size();

  for (i = 0; i < n-(m-1); i++) {
    for (j = 0; j < m; j++) {
      if(mensagem[(i+j)%n] == crib[j]){
        match = true;
        break;
      }
    }
    if(!match) cont++;
    match = false;
  }
  cout << cont << '\n';
  return 0;
}
