//Leia dois números informe sua soma e sua subtração

#include <stdio.h>

int main(void){	
	float num1, num2, soma, subtracao;
	
	fflush(stdin);
	printf("Digite o primeiro numero:\n");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf("Digite o segundo numero:\n");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	printf("A soma dos numeros e: %.1f\n", soma);
	
	subtracao = num1 - num2;
	printf("A subtracao dos numeros e: %.1f\n", subtracao);	
}