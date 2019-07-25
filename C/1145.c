#include <stdio.h>

int main()
{
	int i, j;
	int x, y;
	
	scanf("%d %d", &x, &y);
	
	i=1;
	
	while(i <= y){
		for(j=0;j<x;j++){
			printf("%d",i);
			i++;
			if(j != x-1) printf(" ");
		}
		printf("\n");
	}

	return 0;
}

