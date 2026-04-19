/*5) Escreva um programa que leia 20 números inteiros positivos e, ao final, 
informe quantos números pares e quantos números ímpares foram digitados.*/

#include<stdio.h>

int main(){

	int i, num, par = 0, impar = 0;
	
	for(i = 1; i <= 20; i++){
	
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		
		if(num % 2 == 0)
			par++;
		else
			impar++;
	}
	
	printf("Foram digitados %d numeros pares e %d numeros impares", par, impar);
	return 0;
}
