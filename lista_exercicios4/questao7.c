/*7) Escreva um programa que leia um número inteiro positivo e 
imprima todos os números ímpares positivos menores que o número digitado.*/

#include<stdio.h>

int main(){
	
	int num, impar = 1;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	while(impar < num){
		
		if(impar % 2 == 1)
			printf("%d\n", impar);
			impar++;
	}
	
	return 0;
}
