// Crie uma calculadora que leia 2 números e imprima o menu abaixo:
// Digite:
// 1 Para imprimir a soma dos dois números 
// 2 Para imprimir a subtração dos dois números 
// 3 Para imprimir a multiplicação dos dois números 
// 4 Para imprimir a divisão dos dois números 

#include <stdio.h>

int main()
{
	float num1, num2, resultado;
	int operacao;
	
	fflush(stdin);
	printf("Digite o primeiro numero:\n");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf("Digite o segundo numero:\n");
	scanf("%f", &num2);
	
	fflush(stdin);
	printf("Insira o numero da operacao:\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
	scanf("%d", &operacao);
	
	switch(operacao){
	    case 1:
	        resultado = num1 + num2;
    	    printf("O resultado da soma é: %.1f\n", resultado);
    	    break; 
        case 2:
            resultado = num1 - num2;
    	    printf("O resultado da subtracao é: %.1f\n", resultado);
    	    break; 
    	case 3:
    	    resultado = num1 * num2;
    	    printf("O resultado da multiplicacao é: %.1f\n", resultado);
    	    break; 
    	case 4:
    	    resultado = num1 / num2;
    	    printf("O resultado da divisao é: %.1f\n", resultado);
    	    break; 
	}
}
