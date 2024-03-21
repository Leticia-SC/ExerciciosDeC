// Dado a base e altura de um triangulo informe a área

#include <stdio.h>

int main()
{
	float base, altura, area;
	
	fflush(stdin);
	printf("Informe o tamanho da base:\n");
	scanf("%f", &base);
	
	fflush(stdin);
	printf("Informe a altura:\n");
	scanf("%f", &altura);
	
	area = (base * altura)/2; 
	printf("A area do triangulo e: %.1f\n", area);
}