#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
  int n, total, qntd;
  string entrada, arvore;
  double prct;
  map<string, int> tree;
  map<string, int>::iterator it;

  cin >> n;
  cin.ignore();
  cin.ignore();

  while(n != 0){
    total = 0;
    prct = 0;
    tree.clear();

    while (getline(cin, entrada)) {
      if(entrada.length() == 0) break;
      tree[entrada]++;
      total++;
    }
    for ( it = tree.begin(); it != tree.end(); it++ )
    {
         arvore = it->first;
         qntd = it->second;
         //printf("%s %d\n", arvore.c_str(), qntd);
         prct = (qntd*100.0);
         prct = prct/(double) total;
         printf("%s %.4lf\n", arvore.c_str(), prct);
    }
    n--;
    if(n != 0) printf("\n");
  }
  return 0;
}
