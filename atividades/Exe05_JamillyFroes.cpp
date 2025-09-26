#include<stdio.h>
#include <locale.h>
int main() {
		setlocale(LC_ALL, "Portuguese");
		
	float nota1, nota2, nota3, media;
	
	printf("\nOlá! Este programa recebe TRÊS notas, calcula e mostra a MÉDIA aritmética.\n");
	
	printf("\nDigite o valor da 1° nota: ");
	scanf("%f%*c", &nota1);
	
	printf("\nDigite o valor da 2° nota: ");
	scanf("%f%*c", &nota2);
	
	printf("\nDigite o valor da 3° nota: ");
	scanf("%f%*c", &nota3);
	
	media= (nota1 + nota2 + nota3)/3;
	
	printf("\nA media aritmetica é:  %0.1f",media);
	
	getchar();
	return 0;
}