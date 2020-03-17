#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  int N, i;
  int v[10000];

  for(i = 0; i < 10000; i++){ //Preenche vetor
    v[i] = i + 1;
  }

  cin >> N; //Insere número a ser comparado

  for(i = 0; i < 10000; i++){ //Compara se o resto do valor pelo N é igual a 2
    if((v[i] % N) == 2)
      cout << v[i] << "\n";
  }
}