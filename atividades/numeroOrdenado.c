#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Ola! Este programa le dois numeros inteiros quaisquer e mostra os numeros digitados ordenado.\n");
	
	int num1, num2;
	
	printf("\nDigite o 1 numero: \n");
	scanf("%d", &num1);
	
	printf("\nDigite o 2 numero: \n");
	scanf("%d", &num2);
	
	if(num2>num1){
		printf("Ordenado: %d %d", num1,num2);
	}
	else {
		printf("Ordenado: %d %d", num2,num1);
	}


}