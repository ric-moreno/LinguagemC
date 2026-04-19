/*5) Escreva um programa que leia N números inteiros positivos e, 
ao final, informe quantos números pares e quantos números ímpares foram digitados. 
O programa deve parar a leitura dos números quando o usuário digitar zero ou um número negativo.*/

#include<stdio.h>

int main(){
	
	int num, par = 0, impar = 0;
	
	do{
		
		printf("Digite um numero inteiro positivo (0 ou negativo para interromper): ");
		scanf("%d", &num);
		
		if (num > 0){
		
			if (num % 2 == 0)
				par++;
			else
				impar++;
		}
		
	} while(num > 0);
	
	printf("Foram digitados %d numero(s) par(es) e %d numero(s) impar(es)", par, impar);
	return 0;
}
