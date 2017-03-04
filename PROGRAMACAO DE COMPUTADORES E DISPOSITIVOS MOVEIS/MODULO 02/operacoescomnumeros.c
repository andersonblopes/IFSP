#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1;
	int n2;
	int soma;
	int subtracao;
	int produto;
	int quociente;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	soma = n1+n2;
	subtracao = n1-n2;
	produto = n1*n2;
	quociente = n1/n2;
	
	printf("\nA soma foi: %d", soma);
	printf("\nA subtracao foi: %d", subtracao);
	printf("\nA multiplicacao foi: %d", produto);
	printf("\nA divisao foi: %d", quociente);
	
	return 0;
}
