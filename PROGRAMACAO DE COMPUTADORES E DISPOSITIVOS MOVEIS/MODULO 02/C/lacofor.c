#include <stdio.h>
#include <stdlib.h>

// 51. Escreva um programa em C que imprima os n�meros de 0 a 9 (ordem crescente). 
int main(){
	int cont;
	//Estrutura de rtepeti��o for
	for(cont = 0; cont < 10; cont++){
		printf("Interacao: %d\n",cont + 1);
	}
	
	return 0;
}
