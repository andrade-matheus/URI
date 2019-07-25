#include <stdio.h>

float sqr(float x){
	return x*x;
}

int main()
{
	float A, B, C, V[3], aux;
	float AA, BB, CC;
	int i, j;
	
	
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	
	V[0] = A;
	V[1] = B;
	V[2] = C;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(V[i] > V[j]){
				aux = V[i];
				V[i] = V[j];
				V[j] = aux;
			}
		}
	}
	
	A = V[0];
	B = V[1];
	C = V[2];

	AA = sqr(A);
	BB = sqr(B);
	CC = sqr(C);
	
	if(A >= B + C){
		printf("NAO FORMA TRIANGULO\n");
	}else{	
		if(AA == BB + CC){
			printf("TRIANGULO RETANGULO\n");
		}else if(AA >= BB + CC){
			printf("TRIANGULO OBTUSANGULO\n");
		}else if(AA <= BB + CC){
			printf("TRIANGULO ACUTANGULO\n");
		}
		
		if((A == B) && (A == C) & (B == C)){
			printf("TRIANGULO EQUILATERO\n");
		}else if((A == B) || (A == C) || (B == C)){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	return 0;
}

