#include <stdio.h>
#include <stdlib.h>
int main(){
	
	//Vari�veis
	float n1, n2, n3, n4, media;
	
	//Atribui��o de valores digitados pelo usu�rio
	printf("Digite a nota 1: ");
	scanf("%f",&n1);	
	printf("Digite a nota 2: ");
	scanf("%f",&n2);	
	printf("Digite a nota 3: ");
	scanf("%f",&n3);	
	printf("Digite a nota 4: ");
	scanf("%f",&n4);	
	
	//C�lculo da m�dia
	media = (n1 + n2 + n3 + n4) / 4;
	
	//Verifica��o de aprova��o
	if(media < 3){
		printf("REPROVADO! - Media: %.2f",media);
	}else if(media >= 3 && media < 7){
		printf("RECUPERACAO. - Media: %.2f",media);
	}else {
		printf("APROVADO! - Media: %.2f",media);
	}	
	
	//Finaliza��o do sistema	
	return 0;
}
