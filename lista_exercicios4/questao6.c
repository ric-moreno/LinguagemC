/*6) Escreva um programa que leia N números inteiros positivos e, ao final, 
informe qual foi o menor número digitado. 
O programa deve parar a leitura dos números quando o usuário digitar zero ou um número negativo.*/

#include<stdio.h>

int main(){
	
	int num, menor = 0;
	
	do{
		printf("Digite um numero inteiro positivo (0 ou negativo para parar): ");
		scanf("%d", &num);
		
		if(num > 0)
			menor = num;
				
	} while(num > 0);
	
	printf("O menor numero digitado e: %d", menor);
	return 0;
}
