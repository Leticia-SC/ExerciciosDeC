#include <stdio.h>

int main()
{
//Fazer um programa para receber um número inteiro do usuário e determinar se este número é primo ou não
	int num = 0;
	int i = 0;
	
	fflush(stdin);
	printf("Insira um numero: \n");
	scanf("%d", &num);
	
	for (int x = 2; x <= num; x++){
		if(num % x == 0){
			i++;	
		}		
	}
	
	if(i < 3)
		printf("O numero e primo \n");
	else
		printf("O numero nao e primo \n");
}
