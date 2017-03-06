#include <stdio.h>
#include <stdlib.h>
int main(){
	float n, cubo;
	printf("Digite um numero para obtermos o cubo: ");
	scanf("%f", &n);
	cubo = n*n*n;
	printf("O cubo de %.1f vale: %.1f\n", n,cubo);
	system("pause");
}
