#include<stdio.h>
#include <locale.h>
int main() {
		setlocale(LC_ALL, "Portuguese");
		
	int num1, num2, num3, num4, soma;
	
	printf("\nOlá! Este programa recebe quatro números inteiros, calcula e mostra a soma desses números.");
	
	printf("\nDigite o 1° número: ");
	scanf("%d%*c", &num1);
	
	printf("\nDigite o 2° número: ");
	scanf("%d%*c", &num2);
	
	printf("\nDigite o 3° número: ");
	scanf("%d%*c", &num3);
	
	printf("\nDigite o 4° número: ");
	scanf("%d%*c", &num4);
	
	soma= num1 + num2 + num3 + num4;
	
	printf("\nA soma dos números digitados é:  %d",soma);
	
	getchar();
	return 0;
}