#include <stdio.h>
#include <stdlib.h>
int main(){
	
	//Variáveis
	float n1, n2, n3, n4, media;
	
	//Atribuição de valores digitados pelo usuário
	printf("Digite a nota 1: ");
	scanf("%f",&n1);	
	printf("Digite a nota 2: ");
	scanf("%f",&n2);	
	printf("Digite a nota 3: ");
	scanf("%f",&n3);	
	printf("Digite a nota 4: ");
	scanf("%f",&n4);	
	
	//Cálculo da média
	media = (n1 + n2 + n3 + n4) / 4;
	
	//Verificação de aprovação
	if(media < 3){
		printf("REPROVADO! - Media: %.2f",media);
	}else if(media >= 3 && media < 7){
		printf("RECUPERACAO. - Media: %.2f",media);
	}else {
		printf("APROVADO! - Media: %.2f",media);
	}	
	
	//Finalização do sistema	
	return 0;
}
