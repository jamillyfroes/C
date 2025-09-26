#include<stdio.h>
#include <locale.h>
int main() {
		setlocale(LC_ALL, "Portuguese");
		
	float nota1, nota2, nota3, peso1,  peso2, peso3, media;
	
	printf("\nOlá! Este programa recebE TRÊS notas e seus respectivos PESO, calcula e mostra a MÉDIA PONDERADA.\n");
	
	printf("\nDigite o valor da 1° nota: ");
	scanf("%f%*c", &nota1);
	
	printf("\nDigite o peso da 1° nota: ");
	scanf("%f%*c", &peso1);
	
	printf("\nDigite o valor da 2° nota: ");
	scanf("%f%*c", &nota2);
	
		printf("\nDigite o peso da 2° nota: ");
	scanf("%f%*c", &peso2);
	
	printf("\nDigite o valor da 3° nota: ");
	scanf("%f%*c", &nota3);
	
		printf("\nDigite o peso da 3° nota: ");
	scanf("%f%*c", &peso3);
	
	media =  (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
	
	printf("\nA media aritmetica é:  %0.1f",media);

	
	getchar();
	return 0;
}