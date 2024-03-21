// Leia o preço de dois produtos e informe qual é maior ou se os dois são iguais

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
	if(produto2 > produto1)
	    printf("O preço do segundo produto e maior do que o primeiro produto\n");
    if(produto2 == produto1)
        printf("Os preços dos dois produtos sao iguais\n");
}
