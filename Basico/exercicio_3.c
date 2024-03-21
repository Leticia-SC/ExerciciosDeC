// Dado dois lados de um quadrado informe a área

#include <stdio.h>

int main()
{
	float lado1, lado2, area;
	
	fflush(stdin);
	printf("Informe o primeiro lado:\n");
	scanf("%f", &lado1);
	
	fflush(stdin);
	printf("Informe o segundo lado:\n");
	scanf("%f", &lado2);
	
	area = lado1 * lado2;
	printf("A area do quadrado e: %.1f\n", area);
}