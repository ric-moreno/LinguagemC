/*7) Escreva um programa que leia um número inteiro positivo e 
imprima todos os números ímpares positivos menores que o número digitado.*/
#include<stdio.h>

int main(){
	
	int num, i = 1;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	if(num <= 0){
		printf("Numero invalido\n");
		return 0;
	}
	
	while(i < num){
		if(i % 2 != 0)
			printf("%d ", i);
		i++;
	}
	return 0;
}
