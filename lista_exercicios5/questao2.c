/*2) Escreva um programa que imprima a tabuada completa dos números de 1 até 9, 
considerando as quatro operações aritméticas básicas (soma, subtração, multiplicação e divisão).*/

#include<stdio.h>

int main(){
	
	int num, i, soma, subt, mult;
	float div;
	
	printf("Insira um numero de 1 a 9: ");
	scanf("%d", &num);
	
	for(i = 1; i <=9; i++){
		
		soma = num + i;
		subt = num - i;
		mult = num * i;
		div = num / i;
		
		printf("%d + %d = %d\t%d - %d = %d\t%d * %d = %d\t%d / %d = %.1f\n", i, num, soma, i, num, subt, i, num, mult, i, num, div);
		
	}
	
	return 0;
}
