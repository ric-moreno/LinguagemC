/*1) Escreva um programa que leia dois valores inteiros e efetue a soma entre eles. 
Caso o valor resultante da soma seja maior ou igual a 10, some 5 a este resultado e apresente-o na tela. 
Caso o valor resultante da soma seja menor que 10, subtraia 7 do resultado e imprima-o na tela.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, soma;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	if (soma >= 10) {
		soma = soma + 5;
	}
	
	else {
		soma = soma - 7;
	}
	
	printf("O resultado da soma é: %d", soma);
	return 0;
	
}
