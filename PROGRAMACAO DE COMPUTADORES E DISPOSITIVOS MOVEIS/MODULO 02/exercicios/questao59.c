#include <stdio.h>
#include <stdlib.h>

// 59. Escreva um programa em C que conte quantos números pares existem no intervalo entre 150 e 200. Esse contador deve ser exibido no final. 
int main(){
	printf("\n===============================================================================\n");
	
	int contador = 0;
	int i;
	for(i = 150; i <= 200; i = i+2){
		contador++;
	}
	
	printf("\nEntre 150 e 200 existem %d numeros pares.", contador);
	
	printf("\n===============================================================================\n");

	return 0;
}
