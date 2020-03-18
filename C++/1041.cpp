#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  float x, y;

  cin >> x;
  cin >> y;

//Identifica os quadrantes através da comparação de x e y
//Sendo que y = 0 significa que está no Eixo x e x = 0 no Eixo y
//Quando x = y = 0 significa que está na Origem

  if(x > 0){
    if(y > 0)
      cout << "Q1\n";
    if(y < 0)
      cout << "Q4\n";
    if(y == 0)
      cout << "Eixo X\n";
  }else if(x < 0){
    if(y > 0)
      cout << "Q2\n";
    if(y < 0)
      cout << "Q3\n";
    if(y == 0)
      cout << "Eixo X\n";
  }else if(x == 0.0){
    if(y == 0.0){
      cout << "Origem\n";
    }else{
      cout << "Eixo Y\n";
    }
  }