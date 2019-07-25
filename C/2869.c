#include <stdio.h>

int main()
{
	int c, n;
	int cont_div = 1;
	int num = 1;
	int i = 1;

	scanf("%d", &c);
	
	while(c > 0){
		scanf("%d",&n);
		num = n;
		while(cont_div < n){
			cont_div = 0;
			for(i=1;i<=num;i++){
				if(num % i == 0){
					printf("CONT_DIV, I = %d, %d\n", cont_div, i);
					cont_div++;
				}
			}
			
			if(cont_div >= n){
				printf("%d\n", num);
				break;
			}
			printf("NUM = %d\n", num);
			num++;
		}
		c--;
	}
	
	return 0;
}

