// Dado tres lados de um triangulo informe seu perímetro

#include <stdio.h>

int main()
{
	float lado1, lado2, lado3, perimetro;
	
	fflush(stdin);
	printf("Informe o primeiro lado:\n");
	scanf("%f", &lado1);
	
	fflush(stdin);
	printf("Informe o segundo lado:\n");
	scanf("%f", &lado2);

	fflush(stdin);
	printf("Informe o terceiro lado:\n");
	scanf("%f", &lado3);
	
	perimetro = lado1 + lado2 + lado3; 
	printf("O perimetro do triangulo e: %.1f\n", perimetro);
}