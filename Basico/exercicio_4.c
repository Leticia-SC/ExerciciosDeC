// Dado dois lados de um quadrado informe seu perímetro

#include <stdio.h>

int main()
{
	float lado1, lado2, perimetro;
	
	fflush(stdin);
	printf("Informe o primeiro lado:\n");
	scanf("%f", &lado1);
	
	fflush(stdin);
	printf("Informe o segundo lado:\n");
	scanf("%f", &lado2);
	
	perimetro = (lado1 * 2) + (lado2 * 2); 
	printf("O perimetro do quadrado e: %.1f\n", perimetro);
}