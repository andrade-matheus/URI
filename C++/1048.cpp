#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  float salario, novoSalario;
  int percentual;

  cin >> salario;

  if((salario > 0) && (salario <= 400)){
    novoSalario = salario + (salario * 0.15);
    percentual = 15;
  }else if((salario > 400) && (salario <= 800)){
    novoSalario = salario + (salario * 0.12);
    percentual = 12;
  }else if((salario > 800) && (salario <= 1200)){
    novoSalario = salario + (salario * 0.10);
    percentual = 10;
  }else if((salario > 1200) && (salario <=2000)){
    novoSalario = salario + (salario * 0.07);
    percentual = 7;
  }else if(salario > 2000){
    novoSalario = salario + (salario * 0.04);
    percentual = 4;
  }

  cout << fixed << setprecision( 2 ) << "Novo salario: " << novoSalario << endl 
  << "Reajuste ganho: " << ( novoSalario - salario ) << endl 
  << "Em percentual: " << percentual << " %" << endl;

  return 0;
}
