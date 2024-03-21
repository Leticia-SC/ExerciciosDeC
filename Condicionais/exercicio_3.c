// Leia o valor da temperatura da agua e informe se ela está congelada, em estado líquido ou fervendo

#include <stdio.h>

int main()
{
	float temperatura, estado;
	
	fflush(stdin);
	printf("Temperatura da agua em °C:\n");
	scanf("%f", &temperatura);
	
	if(temperatura <= 0)
	    printf("A agua esta congelada\n");
	if(temperatura >= 100)
	    printf("A agua esta fervendo\n");
    if((temperatura > 0) && (temperatura < 100))
        printf("A agua esta em estado liquido\n");
}
