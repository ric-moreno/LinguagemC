/*8) Faça um programa que leia 10 inteiros e imprima sua média.*/

#include<stdio.h>

int main(){
	
	int num, soma, i, media;
	
	for(i = 1; i <= 10; i++){
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		soma += num;

	}
	
	media = soma / 10;
	printf("Media: %d", media);
	return 0;
}
