#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y;
	
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	printf("Digite o valor de y: ");
	scanf("%d",&y);
	
	//Estrutura de decisão
	if(x > y){
		printf("x eh maior que y");
	}else if(x == y){
		printf("X eh igual a Y");	
	}else{
		printf("x eh menor que y");
	}
	
	return 0;
}
