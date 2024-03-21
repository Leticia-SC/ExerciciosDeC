// Dado o raio de uma circunferência calcule sua área 

#include <stdio.h>

int main()
{
	float raio, circunferencia;
	
	fflush(stdin);
	printf("Informe o raio:\n");
	scanf("%f", &raio);
	
	circunferencia = 2 * 3.14 * raio; 
	printf("A circunferencia e: %.1f\n", circunferencia);
}