#include <stdio.h>
#include <stdlib.h>
int main(){
	float peso, altura, imc;	
	printf("Digite o peso: ");
	scanf("%f",&peso);
	printf("Digite a altura: ");
	scanf("%f",&altura);	
	imc = peso / (altura * altura);	
	printf("O imc eh de: %.2f\n", imc);	
	if(imc < 17.00){
		printf("Voce esta MUITO abaixo do peso ideal");
	}else if(imc >= 17.00 && imc <= 18.49){
		printf("Voce esta ABAIXO do peso ideal");
	}else if(imc >=  18.50 && imc < 25.00){
		printf("PARABENS Voce esta No peso ideal");
	}else if(imc >= 25.00 && imc < 30.00){
		printf("Voce esta com SOBREPESO");
	}else if(imc >= 30.00 && imc < 35.00){
		printf("Voce esta com obesidade GRAU 1");
	}else if(imc >= 35.00 && imc < 40.00){
		printf("Voce esta com obesidade GRAU 2");
	}else if(imc >= 40.00){
		printf("Voce esta com obesidade GRAU 3");
	}	
	return 0;
}
