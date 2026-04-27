/*2) Faça um programa que leia dois números e mostre o maior deles. 
Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.*/

#include<stdio.h>

int main(){
	
	int num1, num2, maior;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2)
		printf("O maior numero digitado e o primeiro: %d\n", num1);
	else if(num1 < num2)
		printf("O maior numero digitado e o segundo: %d\n", num2);
	else
		printf("Numeros iguais\n");
		
	return 0;
}
