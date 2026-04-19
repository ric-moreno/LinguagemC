/*4) Escreva um programa que imprima a série de Fibonacci até o trigésimo termo. 
Os dez primeiros termos da série são: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.*/

#include<stdio.h>

int main(){
	
	int num1 = 0, num2 = 1, i, serie = 0;
	
	for(i = 1; i <= 30; i++){
		
		num1 = num2;
		num2 = serie;
		serie = num1 + num2;
		printf("%d ", serie);
	}
	
	return 0;
}
