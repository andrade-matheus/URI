#include <stdio.h>

int modulo_positivo(int i, int n) {
    return (i % n + n) % n;
}

int main()
{
	int hr_inicio, min_inicio;
	int hr_fim, min_fim;
	
	int hr, min;
	
	scanf("%d %d %d %d", &hr_inicio, &min_inicio, &hr_fim, &min_fim);
	
	hr = hr_fim - hr_inicio;
	hr = modulo_positivo(hr, 24);
	min = min_fim - min_inicio;
	min = modulo_positivo(min,60);
	
	if(hr_inicio >= hr_fim){
		if(min_inicio == min_fim){
			hr = 24;
		}
	}
	
	if(min_inicio > min_fim){
		hr -= 1;
	}

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, min);
	
	return 0;
}

