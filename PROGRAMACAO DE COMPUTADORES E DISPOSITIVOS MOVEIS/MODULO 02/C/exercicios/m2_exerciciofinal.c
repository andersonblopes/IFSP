//******************************************************
//Instituto Federal de S�o Paulo - Campus Sert�ozinho
//Disciplina......: M2LPBA
//Programa��o de Computadores e Dispositivos M�veis
//Aluno...........: Anderson Benigno Lopes
//******************************************************
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n========================= INICIO DO EXERCICIO ================================\n");
	// OBJETIVO....... Vari�veis que ser�o utilizadas no sistema: 
	int numeros[5];
	int contador = 0;
	int soma = 0;
	int produto = 1;
	
	// OBJETIVO.......: Este loop � utilizado para pedir que um usu�rio digite valores que ser�o armazenados em um vetor
	while(contador < 5){									
		printf("Digite o valor de N%d: ", contador + 1);
		
		// OBJETIVO.......: Valor digitado pelo usu�rio � atribuido a posi��o respectiva do vetor
		scanf("%d", &numeros[contador]); 					
		
		// OBJETIVO.......: Contador � incrementado
		contador = contador + 1; 							
	}
	
	printf("===============================================================================\n");
	printf("Numeros digitados: [ ");				// OBJETIVO.......: Loop para mostrar valores digitados
	for(contador = 0; contador < 5; contador++){
		printf("%d ", numeros[contador]);
	}
	printf("]");
	
	
	// OBJETIVO.......: Este loop � utilizado para efetuar a soma e multiplica��o de valores digitados
	for(contador = 0; contador < 5; contador++){
		soma = soma + numeros[contador];
		produto = produto * numeros[contador];
	}
	
	
	printf("\n===============================================================================\n");
	// OBJETIVO.......: Mostrar resultado adequado da soma
	if(soma >= 0){
		printf("A soma dos numeros digitados eh POSITIVA e vale: %d", soma);	
	}else{
		printf("A soma dos numeros digitados eh NEGATIVA e vale: %d", soma);	
	}
		
	printf("\n===============================================================================\n");
	// OBJETIVO.......: Mostrar resultado adequado da multiplica��o
	if(produto >= 0){
		printf("O produto dos numeros digitados eh POSITIVO e vale: %d", produto);	
	}else{
		printf("O produto dos numeros digitados eh NEGATIVO e vale: %d", produto);	
	}
	
	printf("\n========================= FIM DO EXERCICIO ====================================\n");
	return 0;
}
