// Leia o preço de dois produtos e informe se o primeiro é maior que o segundo

#include <stdio.h>

int main()
{
	float produto1, produto2;
	
	fflush(stdin);
	printf("Preço do primeiro produto:\n");
	scanf("%f", &produto1);
	
	fflush(stdin);
	printf("Preço do segundo produto:\n");
	scanf("%f", &produto2);
	
	if(produto1 > produto2)
	    printf("O preço do primeiro produto e maior do que o do segundo produto\n");
}