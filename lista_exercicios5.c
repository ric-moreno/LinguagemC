/*1) Escreva um programa que imprima a tabuada de multiplicação de um número digitado pelo usuário. 
O programa deve pedir para o usuário digitar um número de 1 até 9 e imprimir a tabuada desse número.*/

#include<stdio.h>

int main(){
	
	int num, i, resultado;
	
	printf("Digite um numero de 1 a 9: ");
	scanf("%d", &num);
	
	for(i = 1; i <= 10; i++){
		
		resultado = num * i;
		printf("%d x %d = %d\n", num, i, resultado);
		
	}
	
	return 0;
}
