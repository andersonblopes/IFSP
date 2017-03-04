#include <iostream>

//O inicio do programa
int main(int argc, char** argv) {
	//Declaracao de variaveis
	int numero;
	
	//Atribuição de valor à variavel
	numero = 0;
	
	//Mensagem para o usuário
	printf("Digite um numero inteiro: ");
	
	//Pegar valor digitado e atribuir a variável numero
	scanf("%d",&numero);
	
	//Mostrar na tela mensagem com o valor da variavel numero
	printf("O numero tem como valor: %d", numero);
	
	//Encerramento adequado do programa
	return 0;
}
