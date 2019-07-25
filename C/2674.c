#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int ehprimo(int n){
	int limite, i;
	if(n <= 1) return 0;
		limite = (int)sqrt(n);
		for(i=2;i<=limite;i++){
			if(n%i==0) return 0;
		}
	return 1;
}

int super(int n){
	int x;
	
	while(n > 0){
		
		x = n % 10;
		n = n / 10;
		
		if(!ehprimo(x)) return 0;
	}
	return 1;
}

int main()
{
	int x=0;
	
	while(scanf("%d", &x) != EOF){		
		if(ehprimo(x)){
			if(super(x)){
				printf("Super\n");
			}else{
				printf("Primo\n");
			}
		}else{
			printf("Nada\n");
		}
	}
	return 0;
}

