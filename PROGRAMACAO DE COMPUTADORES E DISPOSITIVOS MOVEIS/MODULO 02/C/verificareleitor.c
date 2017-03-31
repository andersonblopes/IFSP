#include <stdio.h>
#include <stdlib.h>
int main(){
	int idade;
	printf("Digite a idade: ");
	scanf("%d",&idade);	
	if(idade < 16){
		printf("Voce nao pode votar. Nao eleitor");
	}else if(idade >= 18 && idade <= 65){
		printf("Eleitor OBRIGATORIO!");
	}else if((idade > 16 && idade < 18) || idade > 65){
		printf("ELEITOR FACULTATIVO");
	}
	return 0;
}
