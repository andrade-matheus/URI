#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, aux, cont = 0;
  int v[5];

  for(i = 0; i < 5; i++){ //Lendo os valores
    scanf("%d", &aux);
    v[i] = aux;
  }

  for(i = 0; i < 5; i++){ //Conferindo se o valor é par
    if((v[i] % 2) == 0)
      cont++;
  }

  printf("%d valores pares", cont);
  
  return 0;
}