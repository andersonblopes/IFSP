#include <stdio.h>
#include <stdlib.h>

// 62. Escreva um programa em C que faça o somatório de 1 a 40 e exiba o resultado. 
int main(){
	printf("\n===============================================================================\n");
	
	int somatorio = 0;
	int i;
	for(i = 1; i <= 40; i = i+1){		
		somatorio = somatorio + i;
		printf("\ni esta valendo %d e somatorio esta em: %d", i, somatorio);
	}
	
	printf("\nO somatorio de 1 a 40 vale: %d", somatorio);
	
	printf("\n===============================================================================\n");

	return 0;
}
