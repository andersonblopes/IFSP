#include <iostream>

//O inicio do programa
int main(int argc, char** argv) {
	//Declaracao de variaveis
	int numero;
	
	//Atribui��o de valor � variavel
	numero = 0;
	
	//Mensagem para o usu�rio
	printf("Digite um numero inteiro: ");
	
	//Pegar valor digitado e atribuir a vari�vel numero
	scanf("%d",&numero);
	
	//Mostrar na tela mensagem com o valor da variavel numero
	printf("O numero tem como valor: %d", numero);
	
	//Encerramento adequado do programa
	return 0;
}
