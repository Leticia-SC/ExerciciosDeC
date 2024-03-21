// Solicite ao usuário, seu peso, sua altura e calcule o IMC informando em qual faixa ele se encontra.

#include <stdio.h>

int main()
{
	float peso, altura, imc;
	
	fflush(stdin);
	printf("Informe o peso em quilos:\n");
	scanf("%f", &peso);
	
	fflush(stdin);
	printf("Informe o a altura em metros:\n");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if(imc >= 30)
	    printf("Obesidade\n");
	    
	if((imc >= 25) && (imc < 29.9))
	    printf("Sobrepeso\n");
	    
	if((imc >= 18.5) && (imc < 24.9))
	    printf("Normal\n");
	
	if(imc < 18.5)
	    printf("Baixo peso\n");
}
