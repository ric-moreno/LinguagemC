/*3) Escreva um programa que verifique se um número inteiro fornecido pelo usuário é primo ou não. */

#include<stdio.h>

int main(){
	
	int num, i, contador = 0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		if(num % i == 0)
			contador += 1;
		
	}
	
	if(contador == 2)
		printf("O numero %d e um numero primo", num);
	else
		printf("O numero %d nao e um numero primo", num);
	return 0;
}
