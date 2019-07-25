#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int element_index(vector<int> vetor, int valor){
	int i;
	for(i=0;i<vetor.size();i++){
		if(vetor[i] == valor){
			return i;
		}
	}
	return -1;
}

void casos(int n, int q){
	int i, j;
	int valor, aux, pos;	//AUXILIARES
	bool trocou;			//AUXILIARES
	vector<int> marmores;	//AUXILIARES	
	
	i = 0;
	j = 0;
	valor = 0;
	aux = 0;
	pos = 0;
	trocou = false;
	
	for(i=0;i<n;i++){
			cin >> valor;
			marmores.push_back(valor);
		}
		
		sort(marmores.begin(), marmores.end());
		
		for(i=0;i<q;i++){
			cin >> valor;
			pos = element_index(marmores, valor);
			if(pos != -1){
				cout << valor << " found at "<< pos+1 << endl;
			}else{
				cout << valor << " not found" << endl;
			}
		}
}

int main()
{
	int caso; 				//CONTADORES
	int n, q;				//INPUTS DO PROGRAMA

	caso = 1;
	n = 0;
	q = 0;
	
	cin >> n >> q;
	
	while((n != 0) && (q!= 0)){
		cout << "CASE# " << caso << ":" << endl;
		casos(n,q);
		caso++;
		cin >> n >> q;
	}
	return 0;
}

