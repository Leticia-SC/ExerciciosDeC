#include <stdio.h>

int main(void){

//Faça um programa em C que Realize uma contagem decrescente de 99 a 0 utilizando while
	int x = 100;
	
	while(x > 0){
		x = x - 1;
		printf("X: %d\n",x); 
	}
//#######################################################################################

//Faça um programa em C que Realize uma contagem decrescente de 99 a 0 utilizando for
	for(int x = 100; x >= 0; x--){
		printf("X: %d\n",x); 
	}
}
