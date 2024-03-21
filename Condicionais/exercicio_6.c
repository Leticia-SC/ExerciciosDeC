// Pesquise na internet qual a faixa salarial das classes sociais A, B, C e D, 
//solicite ao usuário informar o seu salário e informe em qual classe ele esta;


#include <stdio.h>

int main()
{
	float renda;
	
	fflush(stdin);
	printf("Informe a renda:\n");
	scanf("%f", &renda);
	
	if(renda >= 22000)
	    printf("Classe social A\n");
	    
	if((renda >= 7100) && (renda < 22000))
	    printf("Classe social B\n");
	    
	if((renda >= 2900) && (renda < 7100))
	    printf("Classe social C\n");
	
	if(renda < 2900)
	    printf("Classe social D\n");
}
