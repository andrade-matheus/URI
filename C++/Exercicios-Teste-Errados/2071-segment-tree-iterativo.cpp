#include <iostream>
#include <climits>

using namespace std;

typedef struct tupla{
  int valor;
  int tamanho;
}tupla;

typedef struct no{
  tupla soma;
  tupla soma_esq;
  tupla soma_dir;
  tupla max;
}no;

no arvoreSegmento[300000];
int contas[100000];

no calculaNo(no esq, no dir){
  if (esq.soma.tamanho == -1) {
    return dir;
  }
  if (dir.soma.tamanho == -1) {
    return esq;
  }

  no aux;
  aux.soma.valor = esq.soma.valor + dir.soma.valor;
  aux.soma.tamanho = esq.soma.tamanho + dir.soma.tamanho;

  //Montagem da ESQUERDA
  aux.soma_esq.valor = INT_MIN;
  aux.soma_esq.tamanho = INT_MIN;

  if (aux.soma_esq.valor < esq.soma.valor) {
    aux.soma_esq.valor = esq.soma.valor;
    aux.soma_esq.tamanho = esq.soma.tamanho;
  }else if (aux.soma_esq.valor == esq.soma.valor) {
    aux.soma_esq.tamanho = max(aux.soma_esq.tamanho, esq.soma.tamanho);
  }

  if (aux.soma_esq.valor < esq.soma_esq.valor) {
    aux.soma_esq.valor = esq.soma_esq.valor;
    aux.soma_esq.tamanho = esq.soma_esq.tamanho;
  }else if (aux.soma_esq.valor == esq.soma_esq.valor) {
    aux.soma_esq.tamanho = max(aux.soma_esq.tamanho, esq.soma_esq.tamanho);
  }

  if (aux.soma_esq.valor < (esq.soma.valor + dir.soma_esq.valor)) {
    aux.soma_esq.valor = esq.soma.valor + dir.soma_esq.valor;
    aux.soma_esq.tamanho = esq.soma.tamanho + dir.soma_esq.tamanho;
  }else if (aux.soma_esq.valor == (esq.soma.valor + dir.soma_esq.valor)) {
    aux.soma_esq.tamanho = max(aux.soma_esq.tamanho, (esq.soma.tamanho + dir.soma_esq.tamanho));
  }

  //Montagem da DIREITA
  aux.soma_dir.valor = INT_MIN;
  aux.soma_dir.tamanho = INT_MIN;

  if (aux.soma_dir.valor < dir.soma.valor) {
    aux.soma_dir.valor = dir.soma.valor;
    aux.soma_dir.tamanho = dir.soma.tamanho;
  }else if (aux.soma_dir.valor == dir.soma.valor) {
    aux.soma_dir.tamanho = max(aux.soma_dir.tamanho, dir.soma.tamanho);
  }

  if (aux.soma_dir.valor < dir.soma_dir.valor) {
    aux.soma_dir.valor = dir.soma_dir.valor;
    aux.soma_dir.tamanho = dir.soma_dir.tamanho;
  }else if (aux.soma_dir.valor == dir.soma_dir.valor) {
    aux.soma_dir.tamanho = max(aux.soma_dir.tamanho, dir.soma_dir.tamanho);
  }

  if (aux.soma_dir.valor < (dir.soma.valor + esq.soma_dir.valor)) {
    aux.soma_dir.valor = dir.soma.valor + esq.soma_dir.valor;
    aux.soma_dir.tamanho = dir.soma.tamanho + esq.soma_dir.tamanho;
  }else if (aux.soma_dir.valor == (dir.soma.valor + esq.soma_dir.valor)) {
    aux.soma_dir.tamanho = max(aux.soma_dir.tamanho, (dir.soma.tamanho + esq.soma_dir.tamanho));
  }

  //Montagem do MAXIMO
  aux.max.valor = INT_MIN;
  aux.max.tamanho = INT_MIN;

  if (aux.max.valor < esq.max.valor) {
    aux.max.valor = esq.max.valor;
    aux.max.tamanho = esq.max.tamanho;
  }else if (aux.max.valor == esq.max.valor) {
    aux.max.tamanho = max(aux.max.tamanho, esq.max.tamanho);
  }

  if (aux.max.valor < dir.max.valor) {
    aux.max.valor = dir.max.valor;
    aux.max.tamanho = dir.max.tamanho;
  }else if (aux.max.valor == dir.max.valor) {
    aux.max.tamanho = max(aux.max.tamanho, dir.max.tamanho);
  }

  //Comparando Filho Esquerdo
  if (aux.max.valor < esq.soma.valor) {
    aux.max.valor = esq.soma.valor;
    aux.max.tamanho = esq.soma.tamanho;
  }else if (aux.max.valor == esq.soma.valor) {
    aux.max.tamanho = max(aux.max.tamanho, esq.soma.tamanho);
  }

  //Comparando Filho Direito
  if (aux.max.valor < dir.soma.valor) {
    aux.max.valor = dir.soma.valor;
    aux.max.tamanho = dir.soma.tamanho;
  }else if (aux.max.valor == dir.soma.valor) {
    aux.max.tamanho = max(aux.max.tamanho, dir.soma.tamanho);
  }

  // Comparando Filho esquerdo + Filho esquerdo do Direito
  if (aux.max.valor < (esq.soma.valor + dir.soma_esq.valor)) {
    aux.max.valor = esq.soma.valor + dir.soma_esq.valor;
    aux.max.tamanho = esq.soma.tamanho + dir.soma_esq.tamanho;
  }else if (aux.max.valor == (esq.soma.valor + dir.soma_esq.valor)) {
    aux.max.tamanho = max(aux.max.tamanho, (esq.soma.tamanho + dir.soma_esq.tamanho));
  }

  // Comparando Filho direito + Filho direito do Esquerdo
  if (aux.max.valor < (dir.soma.valor + esq.soma_dir.valor)) {
    aux.max.valor = dir.soma.valor + esq.soma_dir.valor;
    aux.max.tamanho = dir.soma.tamanho + esq.soma_dir.tamanho;
  }else if (aux.max.valor == (dir.soma.valor + esq.soma_dir.valor)) {
    aux.max.tamanho = max(aux.max.tamanho, (dir.soma.tamanho + esq.soma_dir.tamanho));
  }

  if (aux.max.valor < (esq.soma_dir.valor + dir.soma_esq.valor)) {
    aux.max.valor = esq.soma_dir.valor + dir.soma_esq.valor;
    aux.max.tamanho = esq.soma_dir.tamanho + dir.soma_esq.tamanho;
  }else if (aux.max.valor == (esq.soma_dir.valor + dir.soma_esq.valor)) {
    aux.max.tamanho = max(aux.max.tamanho, (esq.soma_dir.tamanho + dir.soma_esq.tamanho));
  }

  // Comparando a soma dos Filhos Direito e Esquerdo
  if (aux.max.valor < aux.soma.valor) {
    aux.max.valor = aux.soma.valor;
    aux.max.tamanho = aux.soma.tamanho;
  }else if (aux.max.valor == aux.soma.valor) {
    aux.max.tamanho = max(aux.max.tamanho, aux.soma.tamanho);
  }

  return aux;
}

no consulta(int index_no, int esq, int dir, int A, int B){
  no no_esq, no_dir;

  // Caso dê over (ou "under") flow.
  if((esq > dir) || (esq > B) || (dir < A)){
    no aux;
    aux.soma.valor = 0;
    aux.soma.tamanho = -1;
    aux.soma_esq.valor = 0;
    aux.soma_esq.tamanho = -1;
    aux.soma_dir.valor = 0;
    aux.soma_dir.tamanho = -1;
    aux.max.valor = 0;
    aux.max.tamanho = -1;
    return aux;
  }

  if ((esq >= A) && (dir <= B)) {
    return arvoreSegmento[index_no];
  }

  no_esq = consulta(2*index_no+1, esq, (esq+dir)/2, A, B);
  no_dir = consulta(2*index_no+2, ((esq+dir)/2)+1, dir, A, B);

  if (no_esq.soma.tamanho == -1) {
    return no_dir;
  }

  if (no_dir.soma.tamanho == -1) {
    return no_esq;
  }

  return calculaNo(no_esq, no_dir);
}

void criaArvoreSegmento(int index_no, int esq, int dir){
  no aux;

  if(esq == dir){
    aux.soma.valor = contas[esq];
    aux.soma.tamanho = 1;
    aux.soma_esq.valor = contas[esq];
    aux.soma_esq.tamanho = 1;
    aux.soma_dir.valor = contas[esq];
    aux.soma_dir.tamanho = 1;
    aux.max.valor = contas[esq];
    aux.max.tamanho = 1;
    arvoreSegmento[index_no] = aux;
  }else{
    criaArvoreSegmento(2*index_no+1, esq, (esq+dir)/2);
    criaArvoreSegmento(2*index_no+2, ((esq+dir)/2)+1, dir);

    arvoreSegmento[index_no] =  calculaNo(arvoreSegmento[2*index_no+1], arvoreSegmento[2*index_no+2]);
  }
}

int main() {
  int T, N, Q, A, B;
  std::cin >> T;
  while (T--) {
    std::cin >> N;
    for (int i = 0; i < N; i++) {
      std::cin >> contas[i];
    }

    criaArvoreSegmento(0, 0, N-1);
    // imprime(N);

    std::cin >> Q;
    for (int j = 0; j < Q; j++) {

      std::cin >> A >> B;
      no resultado = consulta(0, 0, N-1, A-1, B-1);
      // std::cout << '\n' << "NÓ -> " << "(" << A << "," << B <<"): " << '\n';
      // imprime_no(resultado);

      std::cout << resultado.max.valor << " " << resultado.max.tamanho << '\n';
    }
  }

  return 0;
}
