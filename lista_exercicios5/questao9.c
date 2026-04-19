/*9) Escreva um programa que imprima a soma de todos os números inteiros de 100 até 200.*/

#include<stdio.h>

int main(){
	
	int i, soma;
	
	for(i = 100; i <= 200; i++){
		
		soma = soma + i;
		
	}
	
	printf("Soma: %d ", soma);
	return 0;
}
