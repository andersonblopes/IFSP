#include <stdio.h>
#include <stdlib.h>

// 56. Escreva um programa em C que pe�a para o usu�rio fornecer um n�mero inteiro. O programa deve exibir a �tabuada� de 0 a 10 desse n�mero. 
int main(){
	printf("\n===============================================================================\n");
	
	int numero, cont;
	
	printf("Digite um numero para a tabuada: ");
	scanf("%d", &numero);
	
	//Estrutura de rtepeti��o for
	for(cont = 0; cont <= 10; cont++){
		printf("\n%d X %d = %d",numero, cont, numero*cont);
	}
		
	printf("\n\n===============================================================================\n");
	
	return 0;
}
