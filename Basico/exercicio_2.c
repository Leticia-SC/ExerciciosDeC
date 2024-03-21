// Leia quatro números e informe a média

#include <stdio.h>

int main()
{
	float num1, num2, num3, num4, media;
	
	fflush(stdin);
	printf("Digite o primeiro numero:\n");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf("Digite o segundo numero:\n");
	scanf("%f", &num2);
	
	fflush(stdin);
	printf("Digite o terceiro numero:\n");
	scanf("%f", &num3);
	
	fflush(stdin);
	printf("Digite o quarto numero:\n");
	scanf("%f", &num4);
	
	media = (num1 + num2 + num3 + num4)/4;
	printf("A media dos quatro numeros e: %.1f\n", media);
}
