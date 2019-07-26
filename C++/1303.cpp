#include <bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[]) {
  int i, n, x, y, z, w;
  int pontos[100], marcado[100], recebido[100];
  int maior;

  n = -1;
  maior = 0;

  while (n != 0) {
    scanf("%d\n", &n);
    qntd_jogos = ((n * (n−1)) / 2);
    while (qntd_jogos > 0) {
        scanf("%d %d %d %d\n", &x, &y, &z, &w);

        marcado[x] += y;
        marcado[z] += w;
        recebido[x] += w;
        recebido[z] += y;

        if (y > w) {
          pontos[x] += 2;
          pontos[z] += 1;
        } else if (w > y) {
          pontos[z] += 2;
          pontos[x] += 1;
        } else {
          if ((marcado[x]/recebido[x]) > (marcado[z]/recebido[z])) {
            pontos[x] += 2;
            pontos[z] += 1;
          } else {
            pontos[z] += 2;
            pontos[x] += 1;
          }
        }
        qntd_jogos--;
    }
    for (i = 0; i < n; i++) {
      if(pontos[i] > maior){
          maior = pontos[i];
          pos = i;
      }
    }
  }
  return 0;
}
