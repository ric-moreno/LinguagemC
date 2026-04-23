/*7) Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela.*/

#include<stdio.h>

int main(){
	
	int i = 1, soma = 0, num;
	
	do{
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		soma += num;
		i++;
		
	} while(i <= 10);
	
	printf("Soma: %d ", soma);
	return 0;
}
