#include<bits/stdc++.h>
using namespace std;


int main() {

    double valor, notas;
	double moedas = 0;
	int nCem, nCin, nVin, nDez, nCinco, nDois,
	    mUm, mCin, mVin, mDez, mCinco, mUmc;
		
    cin >> valor;
	
	moedas = (valor - (int)valor)*100;//moedas vale a parte decimal de valor
	
	notas = valor;// notas recebe valor
	
	nCem = valor/100;//pegando parte de notas de 100
	notas -= (nCem*100);//notas decrementa a parte das notas de 100
	
	nCin = notas/50;//pegando parte de notas de 50
	notas -= (nCin*50);//notas decrementa a parte das notas de 50
	
	nVin = notas/20;//pegando parte de notas de 20
	notas -= (nVin*20);//notas decrementa a parte das notas de 20
	
	nDez = notas/10;//pegando parte de notas de 10
	notas -= (nDez*10);//notas decrementa a parte das notas de 10
	
	nCinco = notas/5;//pegando parte de notas de 5
	notas -= (nCinco*5);//notas decrementa a parte das notas de 5
	
	nDois = notas/2;//pegando parte de notas de 2
	notas -= (nDois*2);//notas decrementa a parte das notas de 2
	
	mUm = notas;
	
	mCin = moedas/50;//pegando parte de moedas de 50
	moedas -= (mCin*50);//moedas decrementa a parte das moedas de 50
	
	mVin = moedas/25;//pegando parte de moedas de 25
	moedas -= (mVin*25);//moedas decrementa a parte das moedas de 25
	
	mDez = moedas/10;//pegando parte de moedas de 10
	moedas -= (mDez*10);//moedas decrementa a parte das moedas de 10
	
	mCinco = moedas/5;//pegando parte de moedas de 5
	moedas -= (mCinco*5);//moedas decrementa a parte das moedas de 5
	
	mUmc = moedas;//moedas de um centavo eh o que sobra de moedas
	
	cout << "NOTAS:\n"<< nCem <<  " nota(s) de R$ 100.00\n";
	cout << nCin <<" nota(s) de R$ 50.00\n";
	cout << nVin << " nota(s) de R$ 20.00\n";
	cout << nDez << " nota(s) de R$ 10.00\n";
	cout << nCinco << " nota(s) de R$ 5.00\n";
	cout << nDois << " nota(s) de R$ 2.00\n";
	
	cout << "MOEDAS:\n"<< mUm << " moeda(s) de R$ 1.00\n" ;
	cout << mCin << " moeda(s) de R$ 0.50\n";
	cout << mVin << " moeda(s) de R$ 0.25\n";
	cout << mDez << " moeda(s) de R$ 0.10\n"; 
	cout << mCinco << " moeda(s) de R$ 0.05\n"; 
	cout << mUmc << " moeda(s) de R$ 0.01\n";

    return 0;
}