#include<stdio.h>
#include <locale.h>
int main() {
		setlocale(LC_ALL, "Portuguese");
	float salario, valorAumento, novosal;
	printf("\nOlá! Este programa recebe o salário de um funcionário, calcula o aumento e mostra: o salário atual, o valor do aumento e o novo salário.");
	printf("\nDigite o salário do funcionário: ");
	scanf("%f%*c", &salario);
	valorAumento= salario * 0.25;
	novosal= salario + valorAumento;
	
	printf("\nO salário atual é:  %0.2f",salario);
	printf("\nO valor do aumento é:  %0.2f",valorAumento);
	printf("\nO novo salário é: %0.2f ",novosal);
	
	getchar();
	return 0;
}