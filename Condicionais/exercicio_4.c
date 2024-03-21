// Leia 4 notas, calcule a média e informe se o aluno passou por média, ficou de exame ou reprovou direto

#include <stdio.h>

int main()
{
	float nota1, nota2, nota3, nota4, media;
	
	fflush(stdin);
	printf("Insira a primeira nota:\n");
	scanf("%f", &nota1);
	
	fflush(stdin);
	printf("Insira a segunda nota:\n");
	scanf("%f", &nota2);
	
	fflush(stdin);
	printf("Insira a terceira nota:\n");
	scanf("%f", &nota3);
	
	fflush(stdin);
	printf("Insira a quarta nota:\n");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	printf("A media do aluno e: %.1f\n", media);
	
	if(media >= 7)
	    printf("Aprovado\n");
	if(media <= 4)
	    printf("Reprovado\n");
	if((media < 7) && (media > 4))
	    printf("Exame final\n");
}
