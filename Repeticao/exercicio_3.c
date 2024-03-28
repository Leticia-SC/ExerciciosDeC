#include <stdio.h>

int main()
{
//Escreva um programa em C que solicite um número N e imprima os primeiros N termos da sequência de Fibonacci
	int n = 0;
	int fb = 1;
	int aux1 = 0;
	int aux2 = 1;
	
	fflush(stdin);
	printf("Insira um numero: \n");
	scanf("%d", &n);
	
	while(fb <= n){	
		fb = aux1 + aux2;
		aux1 = aux2;
		aux2 = fb;
		printf("X: %d\n",fb); 
	}
}
