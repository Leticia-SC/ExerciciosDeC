// Crie um menu com 4 opções usando switch case. 
// A opção 
// 1 imprimirá “Bom dia” a 
// 2 imprimirá “Boa tarde” a 
// 3 imprimirá “Boa noite” e a 
// 4 imprimirá “Até mais”.

#include <stdio.h>

int main()
{
	int numero;
	
	fflush(stdin);
	printf("Digite um numero de 1 a 4:\n");
	scanf("%d", &numero);
	
	switch(numero){
	    case 1:
    	    printf("Bom dia\n");
    	    break; 
        case 2:
    	    printf("Boa tarde\n");
    	    break; 
    	case 3:
    	    printf("Boa noite\n");
    	    break; 
    	case 4:
    	    printf("Até mais\n");
    	    break; 
	}
}
